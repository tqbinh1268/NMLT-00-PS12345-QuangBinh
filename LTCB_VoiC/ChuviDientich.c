#include <stdio.h>
#define PI 3.14159
int main(){
    int dai, rong, chuVi, dienTich;
    float r, cvHinhTron, dtHinhTron;
    printf("Nhap chieu dai: ");
    scanf("%d",&dai);
    printf("Nhap chieu rong: ");
    scanf("%d",&rong);
    chuVi = (dai + rong)*2;
    dienTich = dai*rong;
    printf("Hinh chu nhat:\ndai = %d\nrong = %d\nChu vi = %d\nDien tich: %d\n",dai,rong,chuVi,dienTich);
    
    printf("Nhap ban kinh: ");
    scanf("%f",&r);
    cvHinhTron = r*2*PI;
    dtHinhTron = r*r*PI;
    printf("Hinh tron:\nBan kinh r = %.2f\nChi vi = %.2f\nDien tich = %.2f\n",r,cvHinhTron,dtHinhTron);
    return 0;
}