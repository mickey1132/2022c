#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=0;
    for(int c=2; c<a; c++)
    {
        if(a%c==0)
            b=1;
        }
    if(b==0)
        printf("%d�O���",a);
    else
        printf("%d���O���",a);
}
