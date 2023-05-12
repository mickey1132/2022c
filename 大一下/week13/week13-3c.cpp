#include <stdio.h>
int main()
{
	int a,b,c=3;
	scanf("%d%d",&a,&b);
	while(a%3!=0)a=a+1;
	for(int i=a;i<=b;i=i+3)
	{
		c+=i;
	}
	printf("%d",c-3);
}
