#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ans=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)ans+=i;
	}
	printf("%d",ans);
}
