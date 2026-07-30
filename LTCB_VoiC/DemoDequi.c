#include <stdio.h>
unsigned long giaiThua1(int n);
unsigned long giaiThua2(int n);
unsigned long mu1(int a, int n);
unsigned long mu2(int a, int n);
unsigned long muChan(int a, int n);
//Thap HaNoi
//n dia
//3 cot: A B tam
//chuyen n dia tu cot A sang B
//chuyen n-1 dia tu cot A sang tam - đệ qui
//chuyen dia thu n tu cot A sang cot B
//chuyen n-1 tu cot tam sang cot B - đệ qui
int main(){
    int n = 32,a=2;
    // printf("Giai thua 1: %d! = %lu\n",n,giaiThua1(n));
    // printf("Giai thua 2: %d! = %lu\n",n,giaiThua2(n));
    printf("Mu 1: %d ^ %d = %lu\n",a,n,mu1(a,n));
    printf("Mu 2: %d ^ %d = %lu\n",a,n,mu2(a,n));
    printf("Mu chan: %d ^ %d = %lu\n",a,n,muChan(a,n));
    return 0;
}

unsigned long giaiThua1(int n){
    unsigned long tich = 1;
    for(int i=1;i<=n;i++){
        tich *=i;
    }
    return tich;
}

unsigned long giaiThua2(int n){
    if(n==0 || n==1) return 1;
    return n*giaiThua2(n-1);
}

//a^n
unsigned long mu1(int a, int n){
    unsigned long tich = 1;
    for(int i = 1;i<=n; i++){
        tich *= a;
    }
    return tich;
}


unsigned long mu2(int a, int n){
    if(n==0) return 1;
    if(n==1) return a;
    return mu2(a,n-1)*a;
}

//a^4 = a^2 * a^(n/2) 
int dem=0;
unsigned long muChan(int a, int n){
    dem++;
    printf("dem: %d\n",dem);
    if(n==0) return 1;
    if(n==1) return a;
    if(n%2!=0) return mu2(a,n);
    unsigned long tam = muChan(a,n/2);
    return tam*tam;
}