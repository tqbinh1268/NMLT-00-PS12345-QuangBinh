#include <stdio.h>
void Nhap(int *toan, int *ly, int *hoa);
float DiemTB(int toan, int ly, int hoa);
const char* XepLoai(float diem);
int main(){
    int t,l,h,lap;
    float dtb;

    do
    {
        Nhap(&t,&l,&h);
        printf("Toan: %d\tLy: %d\tHoa: %d\n",t,l,h);
        dtb = DiemTB(t,l,h);
        printf("Diem trung binh: %.2f\n",dtb);
        printf("Xep loai: %s\n",XepLoai(dtb));
        printf("Tiep tuc khong (0/1)");
        scanf("%d",&lap);
    } while (lap == 1);
    
    return 0;
}

void Nhap(int *toan, int *ly, int *hoa){
    printf("Nhap toan: ");
    scanf("%d",toan);
    printf("Nhap ly: ");
    scanf("%d",ly);
    printf("Nhap hoa: ");
    scanf("%d",hoa);
}

float DiemTB(int toan, int ly, int hoa){
    return (float)(toan + ly + hoa)/3;
}

const char* XepLoai(float diem){
    if(diem>=8.5)
        return "Gioi";
    else if(diem>=6.5)
        return "Kha";
    else if(diem>=5)
        return "Trung binh";
    else
        return "Yeu";
}