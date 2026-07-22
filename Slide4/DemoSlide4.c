#include <stdio.h>
int main(){
    double n,m,tong;
    int index,s;
    //in các số từ 0 - 10
    printf("in các số từ 0 - 10\n");
    for(int i=0; i<=10; i++){
        printf("%d\t",i);
    }
    //in các số chẵn từ 1 - 10
    printf("\n\nin các số chẵn từ 1 - 10\n");
    for(int i=1; i<=10;i++){
        if(i%2 == 0){
            printf("%d\t",i);
        }
    }

    printf("\n\nin các số chẵn từ 1 - 10 - Giảm số lần lặp\n");
    for(int i=2; i<=10;i+=2){
        // if(i%2 == 0){
            printf("%d\t",i);
        // }
    }

    //in các số chia hết cho 3 từ 1 - 100
    printf("\n\nin các số chia hết cho 3 từ 1 - 100\n");
    for(int i=1; i<=100;i++){
        if(i%3 == 0){
            printf("%d\t",i);
        }
    }

    //in bội của n và m (nhập từ bàn phím) giữa các số tu 1 - 100
    // printf("\n\nin bội của n và m (nhập từ bàn phím) giữa các số tu 1 - 100\n");
    // printf("Nhap n, m: ");
    // scanf("%d%d",&n,&m);
    // for(int i = 100; i>=1; i--){
    //     if(i%n==0 && i%m==0){
    //         printf("%d\t",i);
    //     }
    // }

    //nhap vao n, in bang cuu chuong cua n
    // printf("Nhap n: ");
    // scanf("%d",&n);
    n=5;
    printf("\n\nBang cuu chuong %d\n",n);
    for(int i=1; i<=10; i++){
        printf("%2d x %2d = %3d\n",n,i,n*i);
    }

    //tong số gạo qua các ô bàn cờ vua
    printf("\n\ntong số gạo qua các ô bàn cờ vua: \n");
    n=1;
    tong = 0;
    for(int i=1; i<=64;i++){
        tong += n; //tong = tong + n
        printf("%d\t%.0lf\t%.0lf\n",i,n,tong);
        n *= 2; //n = n*2;
    }
    printf("\nTong so hat gao: %d\n",tong);
    //1 + 2 + 3 + ...
    //tinh s = 3 + 6 + 9 ... sao cho s <= 100
    s=0;
    index = 1;
    while (s<=100)
    {
        s += 3*index;
        printf("%d\t%d\n",index,s);
        index++;
    }
    printf("\nTong s = %d\n",s);

    s=0;
    index = 1;
    printf("\n\ndo - while\n");
    do
    {
        s += 3*index;
        printf("%d\t%d\n",index,s);
        index++;
    }while (s<=100);
    if(s>100){
        s-= 3*(--index);
    }
    printf("\nTong s = %d\n",s);
    //tinh s = 3 + 6 + 9 ... sao cho s <= 100
    s=0;
    index = 1;
    while (s<=200)
    {
        if(s+3*index>200){
            break;
        }
        s += 3*index;
        printf("%d\t%d\n",index,s);
        
        index++;
    }
    printf("\nTong có break s = %d\n",s);

    index=1;
    tong=0;
    while (tong<=100)
    {
        if(index%3==0){
            
            tong+=index;
        }
        printf("%d\t%d",index,tong);
        if(index%2==0){
            continue;
        }
        index++;
    }
    printf("\ntong s = %d",s);
    

    return 0;
}