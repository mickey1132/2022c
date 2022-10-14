#include <stdio.h>
int main()
{
    int a, b, ans;
    printf("請輸入兩個數:");
    scanf("%d%d", &a, &b );
    for(int i=1 ; i<=a ; i++)
    {
        if(a%i==0 && b%i==0)
            ans=i;
    }
     printf("找到答案是:%d", ans);
}
