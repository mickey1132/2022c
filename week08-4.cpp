#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int b=2;b<=a;b++)
	{
		int c=0;
		for(int d=2;d<b;d++)
		{
			if(b%d==0)c=1;
		}
		if(c==0)printf("%d ",b);
	}
}
