#include <stdio.h>
struct PhanSo
    {
        int tu;
        int mau;
    };
struct PhanSo nhapPS();
int main(){
    

    struct PhanSo ps1,ps2,tongPS,hieuPS,tichPS,thuongPS;
    //viet ham nhap phan so => tra phan so moi nhap ra ten ham
    printf("Nhap phan so thu nhat:\n");
    ps1 = nhapPS();
    // printf("Tu: ");
    // scanf("%d",&ps1.tu);
    // printf("Mau: ");
    // scanf("%d",&ps1.mau);

    printf("Nhap phan so thu hai:\n");
    printf("Tu: ");
    scanf("%d",&ps2.tu);
    printf("Mau: ");
    scanf("%d",&ps2.mau);

    //mau chung 
    tongPS.tu  = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
    //  4/5 + 5/9 = ?/?
    tongPS.mau = ps1.mau*ps2.mau;
     printf("%d/%d + %d/%d = %d/%d ", 
        ps1.tu,ps1.mau,
        ps2.tu,ps2.mau,
        tongPS.tu,tongPS.mau);

    return 0;
}

struct PhanSo nhapPS(){
    struct PhanSo ps;
    ps.tu = 4;
    ps.mau = 6;
    return ps;
}