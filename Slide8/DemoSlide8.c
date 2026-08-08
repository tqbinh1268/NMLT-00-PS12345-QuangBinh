#include <stdio.h>
int main(){
    //Quan ly ds sinh vien 40, 4000
    int n=1;
    // char maSV1[8];
    // char tenSV1[30];
    // float diemSV1;

    // char maSV2[8];
    // char tenSV2[30];
    // float diemSV2;

    // char dsMaSV[40][8];
    // char dstenSV[40][30];
    // float dsDiemSV[40];
    //Sap xep ds sinh vien theo diem => thay doi vi tri cua dsMaSV, dstenSV
    struct NgayThang
    {
        int ngay;
        int thang;
        int nam;
    };
    
    struct SinhVien
    {
        char maSV[8];
        char tenSV[30];
        float diemSV;
        struct NgayThang ngaySinh;
    };
    
    // struct SinhVien sv3;
    struct SinhVien dsSinhVien[40];
    //nhap du lieu
    for(int i=0;i<n;i++){
        printf("Nhap ma SV[%d]: ",i);
        gets(dsSinhVien[i].maSV);
        printf("Nhap ten SV[%d]: ",i);
        gets(dsSinhVien[i].tenSV);
        printf("Nhap diem SV[%d]: ",i);
        scanf("%f",&dsSinhVien[i].diemSV); //7.5 enter
        printf("Nhap ngay thang nam sinh: ");
        scanf("%d%d%d",&dsSinhVien[i].ngaySinh.ngay,
                    &dsSinhVien[i].ngaySinh.thang,
                    &dsSinhVien[i].ngaySinh.nam);
        getchar();
    }

    printf("Xuat danh sach sinh vien: \n");
    printf("STT  Ma sinh vien   Ten sinh vien            Diem SV  Ngay sinh\n");
    for(int i=0; i<n; i++){
        printf(" %-4d %-14s %-24s %8.2f%2d-%2d-%4d\n",
            i+1,
            dsSinhVien[i].maSV,
            dsSinhVien[i].tenSV,
            dsSinhVien[i].diemSV,
            dsSinhVien[i].ngaySinh.ngay,
            dsSinhVien[i].ngaySinh.thang,
            dsSinhVien[i].ngaySinh.nam
        );
    }

    return 0;
}