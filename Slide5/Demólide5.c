#include <stdio.h>
float TinhDiemTB(float toan, float ly, float hoa);
const char* XepLoai(float diem);
int main()
{
    float toan, ly, hoa;
    do
    {
        printf("Nhap toan, lý, hoá: ");
        scanf("%f%f%f", &toan, &ly, &hoa);
        printf("Diem trung binh: %.2f\n", TinhDiemTB(toan, ly, hoa));
        printf("Xep loai: %s\n", XepLoai(TinhDiemTB(toan, ly, hoa)));
    } while (1 == 1);

    return 0;
}
float TinhDiemTB(float toan, float ly, float hoa)
{
    return (toan + ly + hoa) / 3;
}

const char *XepLoai(float diem)
{
    if (diem >= 8.5)
        return "Gioi";
    else if (diem >= 6.5)
        return "Kha";
    else if (diem >= 5)
        return "Trung binh";
    else
        return "Yeu";
}

void HoanVi2(int *a, int *b)
{                 // 123 456
    int tam = *a; // tam = 123
    *a = *b;      //*a = 456 chứa giá trị 3
    *b = tam;     //*b = 123 chứa giá trị 7
    // printf("Trong ham hoan vi: x = %d\ty = %d\n",a,b);
}