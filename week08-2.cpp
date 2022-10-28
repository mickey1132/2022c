#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=1;
    while(b<=a)
    {
        int c=1;
        while(c<=a)
        {
            if(c<=a-b)
                printf(" ");
            else
                printf("*");
            c++;
        }
        printf("\n");
        b++;
    }
}
