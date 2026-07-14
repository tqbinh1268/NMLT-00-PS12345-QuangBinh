#include <stdio.h>
int main(){
    int a = 5, b,c,d;
    b = a++; //cong a=6 gan b=6
    c = ++a; //a=6 gan c=6 cong a=7
    a += 2; // a = a + 2
    printf("a: %d.  b: %d   c: %d\n",a,b,c);
    return 0;
}