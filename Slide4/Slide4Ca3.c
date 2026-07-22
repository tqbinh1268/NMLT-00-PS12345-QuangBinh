#include <stdio.h>
int main()
{
    int i, s, a;
    // s = 1 + 2 + 3 + ... <= 10
    s=0;
    i=1;
    while (s<=78)
    {
        if(s+i>78)
            break;
        s+=i;
        printf("%d %d\n",i,s);
        i++;
    }
    
    printf("%d\t%d\n",i-1,s);
    a = 10;
    LableA:
    printf("LableA a = %d\n",a);
    LableB:
    printf("LableB a = %d\n",a);
    do {
        if( a == 15) {
            // quay về do khi a = 15 (bỏ qua lệnh print)
            a = a + 1;
            goto LableA;
        }
        if( a == 25) {
            // quay về do khi a = 15 (bỏ qua lệnh print)
            a = a + 1;
            goto LableB;
        }
        printf("Gia tri cua a: %d\n", a);
        a++;
    
    } while( a < 30 );
    return 0;
}