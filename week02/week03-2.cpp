#include <stdio.h>
int main()
{
    int a;
    printf("輸入一個數字:");
    scanf("%d",&a);
    if (a>10)
        printf("大於10\n");
    if (a<10)
        printf("小於10\n");
    if (a==10)
        printf("等於10\n");
}

