#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
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
    int a,b,c;
    printf("Nhap a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("So lon nhat: %d\n",soLonNhat(a,b,c));
}

//2. Kiểm tra Năm nhuận  
void chucNang2(){
    int nam;
    printf("Nhap nam: ");
    scanf("%d",&nam);
    if(kiemTraNamNhuan(nam)){
        printf("Nam %d la nam nhuan\n",nam);
    }else{
        printf("Nam %d khong phai la nam nhuan\n",nam);
    }
}

//hoan vi
void chucNang3(){
    int x,y;
    printf("Nhap hai so x, y: ");
    scanf("%d%d",&x,&y);
    printf("Truoc khi hoan vi x = %d. y = %d\n",x,y);
    swap(&x,&y); //chú ý
    printf("Sau khi hoan vi x = %d. y = %d\n",x,y);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} 

void chucNang4(){
    int a,b,c;
    printf("Nhap 3 canh a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("%s\n",checkTriangle(a,b,c));
}

void chucNang5(){
    
}