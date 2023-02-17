#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf(" %d 加 %d = %d\n", a , b , a+b );
    printf(" %d 減 %d = %d\n", a , b , a-b );
    printf(" %d 乘 %d = %d\n", a , b , a*b );
    printf(" %d 除 %d = %d\n", a , b , a/b );
    printf(" %d 除 %d 的餘數 %d\n", a , b , a%b );
}
