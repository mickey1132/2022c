#include <stdio.h>
int a=10;
void func()
{
    int a=20;
    printf("func()��a�O:%d\n",a);
    a=30;
    printf("func()��a�O:%d\n",a);
}
int main()
{
    printf("main()��a�O:%d\n",a);
    func();
    printf("main()��a�O:%d\n",a);
}
