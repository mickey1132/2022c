#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		int bad=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)bad=1;
		}
		if(bad==0)c++;
	}
	printf("%d\n",c);
}
