#include <stdio.h>
int main()
{
    int a;
    printf("請輸入1個數字");
    scanf("%d",&a);
    printf("用8除餘%d\n",a%8);
    printf("用9除餘%d\n",a%9);
    printf("用15除餘%d\n",a%15);
}
