#include <stdio.h>
int a=30;
int funcA(int a,int b)
{
    printf("funcA()中a,b是:%d %d\n",a,b);
    return a+b;
}
int funcB(int n)
{
    printf("funcB()中n是:%d\n",n);
    int ans=funcA(n,n);
    return ans;
}
int main()
{
    int a=10,b=20;
    funcB(b);
    funcA(a,b);
    printf("main的a,b是:%d %d\n",a,b);
}
