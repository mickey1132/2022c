#include <stdio.h>
int a=10;
void func()
{
    int a=20;
    printf("func()中a是:%d\n",a);
    a=30;
    printf("func()中a是:%d\n",a);
}
int main()
{
    printf("main()中a是:%d\n",a);
    func();
    printf("main()中a是:%d\n",a);
}
