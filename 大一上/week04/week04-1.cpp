#include <stdio.h>
int main()
{
    int a;
    printf("�п�J�褸�~:");
    scanf("%d",&a);
    if(a%400==0) printf("�|�~");
    else if(a%100==0)printf("���q�~/���~");
    else if(a%4==0)printf("�|�~");
    else printf("���q�~/���~");
}
