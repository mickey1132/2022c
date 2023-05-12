#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int leap=0;
	if(a%400==0)leap=1;
	else if(a%100==0)leap=0;
	else if(a%4==0)leap=1;
	else leap=0;
	if(leap==1)printf("%d is a leap year.\n",a);
	else printf("%d is not a leap year.\n",a);
}
