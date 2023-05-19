#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int x=1;
	while(a>0)
	{
		printf("%d ",a%10*x);
		a=a/10;
		x=x*10;
	}
}
