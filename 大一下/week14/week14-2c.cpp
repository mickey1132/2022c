#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[1];
	for(int i=0;i<10;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	for(int i=0;i<10;i++)
	{
		if(min==a[i])
		printf("%d",i+1);
	}
	printf(" %d\n",4320/min);
}
