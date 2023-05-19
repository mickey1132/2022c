#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d",&a);
	for(int j=0;j<a;j++)
	{
		if(j*j==a)
		{
			ans=j;
		}
	}
	printf("%d",ans);
}
