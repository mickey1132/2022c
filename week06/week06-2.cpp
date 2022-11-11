#include <stdio.h>
int main()
{
    for(int a=1 ; a<=5; a++)
    {
        int b=a*2-1;
        int c=5-a;
        for(int d=0 ; d<c ; d++)
        {
            printf(" ");
        }
        for(int d=0 ; d<b ; d++){
            printf("*");
        }
        printf("ÆN¬[%d¼Ó ¬P¬P%dÁû\n",a,b);
    }
}
