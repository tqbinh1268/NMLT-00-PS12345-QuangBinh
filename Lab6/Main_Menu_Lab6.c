#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include<float.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

float tinhTrungBinhCong(int a[], int n);
void swap(int *a, int *b);
int main(){
    int chon;
    do
    {
        menu();
        printf(">> Xin mời chọn chức năng (1-6): ");
        scanf("%d",&chon);
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            chucNang5();
            break;
        case 6:
            printf("Tam biet!");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 6\n");
            break;
        }
    } while (chon != 6);
    
    return 0;
}

void menu(){
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHƯƠNG TRÌNH LAB 6               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tính trung bình tổng số chia hết cho 3 và 5    |\n");
    printf("| 2. Tìm giá trị Lớn nhất và Nhỏ nhất trong Mảng    |\n");
    printf("| 3. Sắp xếp Mảng theo thứ tự Giảm dần              |\n");
    printf("| 4. Ma trận bình phương (Mảng 2 chiều)             |\n");
    printf("| 5. Lọc và xuất vị trí các Số lẻ trong Ma trận     |\n");
    printf("| 6. Thoát chương trình                             |\n");
    printf("+---------------------------------------------------+\n");
    
}

void chucNang1(){
    int n;
    int a[10];
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap A[%d]= ",i);
        scanf("%d",&a[i]);
    }
    float tbc = tinhTrungBinhCong(a,n);
    if(tbc == -FLT_MAX){
        printf("Khong co so chia het cho 3 va 5\n");
    }else{
        printf("Trung binh cong cua mang: %.2f\n",tbc);
    }
}

//2. Kiểm tra Năm nhuận  
void chucNang2(){
    
}

//hoan vi
void chucNang3(){
    
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} 

void chucNang4(){
    
}

void chucNang5(){

}

//////
float tinhTrungBinhCong(int a[], int n){
    int tong = 0;
    int soDem = 0;
    for(int i=0;i<n;i++){
        if(a[i]%3==0 && a[i]%5==0){
            tong+=a[i];
            soDem++;
        }
    }
    if(soDem==0){
        return -FLT_MAX; //số nhỏ nhất trong float
    }else{
        return (float)tong/soDem;
    }
        
}