#include <stdio.h>
int main()
{
	int a[10];
	int d=0;
	for(int b=0;b<10;b++)
	{
		scanf("%d",&a[b]);
	}
	for(int c=0;c<10;c++)
	{
		if(a[c]%3==0)
		{
			d++;
		}
	}
	printf("%d\n",d);
}
