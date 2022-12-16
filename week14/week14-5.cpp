#include <stdio.h>
int god(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return god (b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=god(a,b);
    printf("%d",ans);
}
