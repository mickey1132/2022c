#include <stdio.h>
int main()
{

    int a, b,c;
    printf("�п�J��Ӽ�:");
    scanf("%d%d" , &a , &b );
    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;

    }
    printf("�����O:%d",b);
}
