#include <stdio.h>
#include <string.h>
int main()
{
	char line[40];
	int total=0;
	while(scanf("%s",line)==1){
	int ans=0;
	int n=strlen(line);
	for(int i=0;i<n;i++)
	{
		if(line[i]=='2')ans++;
	}
	printf("%d\n",ans);
	total +=ans;
	}
	printf("Total: %d\n",total);
}
