#include <stdio.h>
int main(){
    //CRU D
    // int n=50;
    // int A[n]; //int a0, a1, a2 ...//c
    // //nhap mang A
    // for(int i=0;i<n;i++){
    //     printf("Nhap A[%d] = ",i);
    //     scanf("%d",&A[i]);
    // }
    // //xuat mang A
    // for(int i = 0;i<n;i++){ //r
    //     printf("PT[%d] = %d\n",i+1,A[i]);
    // }
    // //cap nhat
    // for(int i=0;i<n;i++){
    //     if(A[i]%2!=0)
    //         A[i]++;
    // }

    // //xuat mang A
    // for(int i = 0;i<n;i++){ //r
    //     printf("PT[%d] = %d\n",i+1,A[i]);
    // }
    printf("--------- mang 2 chieu ------\n\n");
    int d=3,c=3;
    int B[d][c]; 
    //nhap
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            printf("B[%d,%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    //xuat
    printf("\n\n Xuat mang 2 chieu: \n\n");
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                printf("%3d\t",B[i][j]);
            }else{
                printf("   \t");
            }
            // printf("B[%2d,%2d] = %3d\t",i,j,B[i][j]);
        }
        printf("\n");
    }

    return 0;
}