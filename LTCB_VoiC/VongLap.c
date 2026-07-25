#include <stdio.h>
int main(){
    int diem;
    do{
        printf("Nhap diem: ");
        scanf("%d",&diem);
    }while(diem<0 || diem>10);
    printf("Diem toan = %d\n",diem);
    return 0;
}