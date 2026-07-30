#include <stdio.h>
#include <time.h> // Thư viện đo thời gian

long double mu1(int a, int x); // Đệ quy nhanh (Chia để trị O(log x))
long double mu2(int a, int x); // Đệ quy tuyến tính (O(x))
long double mu3(int a, int x); // Vòng lặp lặp (O(x))

void haNoi(int n, char from, char to, char aux);

int main()
{
    int a = 2, x = 128; // Nâng x lên 30 để thấy rõ sự khác biệt

    // printf("--- BAI TOAN THAP HA NOI ---\n");
    // haNoi(10, 'A', 't', 'B');
    // printf("----------------------------\n\n");

    clock_t start, end;
    double time_taken;
    int loop_count = 1000000; // Chạy 1 triệu lần để đo độ lệch chính xác hơn
    long double res;

    // --- Đo thời gian mu1 (Đệ quy chia để trị) ---
    start = clock();
    for (int i = 0; i < loop_count; i++)
    {
        res = mu1(a, x);
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("%d ^ %d = %.2f | Thoi gian mu1 (Luy thua nhanh): %f giay\n", a, x, res, time_taken);

    // --- Đo thời gian mu2 (Đệ quy tuyến tính) ---
    start = clock();
    for (int i = 0; i < loop_count; i++)
    {
        res = mu2(a, x);
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("%d ^ %d = %.2f | Thoi gian mu2 (De quy thuong):   %f giay\n", a, x, res, time_taken);

    // --- Đo thời gian mu3 (Vòng lặp) ---
    start = clock();
    for (int i = 0; i < loop_count; i++)
    {
        res = mu3(a, x);
    }
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("%d ^ %d = %.2f | Thoi gian mu3 (Vong lap):        %f giay\n", a, x, res, time_taken);

    return 0;
}

// Ví dụ: Tháp HaNoi
void haNoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    haNoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    haNoi(n - 1, aux, to, from);
}

long double mu1(int a, int x)
{
    if (x % 2 != 0 && x != 1)
        return 0;
    if (x == 1)
        return a;
    else{
        long double temp = mu1(a, x / 2);
        return temp*temp;
    } 
}

// mu2: Đệ quy tuyến tính O(x)
long double mu2(int a, int x)
{
    if (x == 0)
        return 1;
    if (x == 1)
        return a;
    return mu2(a, x - 1) * a;
}

// mu3: Vòng lặp O(x)
long double mu3(int a, int x)
{
    long double tich = 1;
    for (int i = 1; i <= x; i++)
        tich *= a;
    return tich;
}