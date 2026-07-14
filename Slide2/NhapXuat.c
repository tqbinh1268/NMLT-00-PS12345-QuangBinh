#include <stdio.h>
int main(){
    int namSinh;
    printf("Ban hay nhap nam sinh: ");
    scanf("%d",&namSinh);
    printf("Ban sinh nam %d, ban da %d tuoi.\n",namSinh,2026 - namSinh);
}