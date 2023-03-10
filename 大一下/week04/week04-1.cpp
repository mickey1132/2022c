#include <stdio.h>
int main()
{
    int a=10;
    printf("A的值是%d\n",a);
    printf("A的家是%d\n",&a);
    int b=20;
    printf("B的值是%d\n",a);
    printf("B的家是%d\n",&a);
    int c=30;
    printf("C的值是%d\n",a);
    printf("C的家是%d\n",&a);
}
