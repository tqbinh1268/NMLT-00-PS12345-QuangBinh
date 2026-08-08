#include <stdio.h>
#include <string.h>

int main(){
    char string1[30] = "FpT poLYtechnIc HCM";// = {'A','B','C'};
    char string2[30];
    char string3[30];

    printf("Chuoi 1: %s\n",string1);

    printf("Nhap chuoi 2: ");
    // scanf("%s",string2); //nhan chuoi den khoang trang hoac enter
    gets(string2);
    printf("Chuoi moi nhap: %s\n",string2);

    printf("Nhap chuoi 3: ");
    scanf("%s",string3); //nhan chuoi den khoang trang hoac enter
    printf("Chuoi moi nhap: %s\n",string3);
    return 0;
}