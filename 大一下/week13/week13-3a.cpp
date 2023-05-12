#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>1000 &&a<10000)printf("%d",a/1000);
	else if(a>10000)printf("%d",a/1000%10);
}
