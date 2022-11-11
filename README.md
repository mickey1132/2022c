# 2022c
資傳一甲 程式設計 程式倉庫

# week08
##08-1
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int a=1; a<=n; a++)
    {
        for(int b=1; b<=n; b++)
        {
            if(b<=n-a)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
```
##08-2
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=1;
    while(b<=a)
    {
        int c=1;
        while(c<=a)
        {
            if(c<=a-b)
                printf(" ");
            else
                printf("*");
            c++;
        }
        printf("\n");
        b++;
    }
}
```
##08-3
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=0;
    for(int c=2; c<a; c++)
    {
        if(a%c==0)
            b=1;
    }
    if(b==0)
        printf("%d是質數",a);
    else
        printf("%d不是質數",a);
}
```
##08-4
```cpp
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
```
# week07
## 07-1
```cpp
#include <stdio.h>
int main()
{
    int n=123456789123123;
    printf("%d\n",n);
    long long int a=123456789123456789;
    printf("%lld",a);
}
```
## 07-2
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){
        if( a%i==0 && b%i==0 )ans=i;
    }
    printf("答案是%lld\n",ans);
}
```
## 07-3
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是%lld\n",b);
}
```
## 07-4
```cpp
#include <stdio.h>
int main()
{
    int n=123456789;
    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }

}
```
# week06
## 06-1
```cpp
#include <stdio.h>
int main()
{
    for(int a=1 ; a<=5; a++)
    {
        int b=a*2-1;
        printf("鷹架%d樓 星星%d顆\n",a,b);
    }
}
```
## 06-2
```cpp
#include <stdio.h>
int main()
{
    for(int a=1 ; a<=5; a++)
    {
        int b=a*2-1;
        int c=5-a;
        for(int d=0 ; d<c ; d++)
        {
            printf(" ");
        }
        for(int d=0 ; d<b ; d++){
            printf("*");
        }
        printf("鷹架%d樓 星星%d顆\n",a,b);
    }
}
```
## 06-3
```cpp
#include <stdio.h>
int main()
{
    int a, b, ans;
    printf("請輸入兩個數:");
    scanf("%d%d", &a, &b );
    for(int i=1 ; i<=a ; i++)
    {
        if(a%i==0 && b%i==0)
            ans=i;
    }
     printf("找到答案是:%d", ans);
}
```
## 06-4
```cpp
#include <stdio.h>
int main()
{

    int a, b,c;
    printf("請輸入兩個數:");
    scanf("%d%d" , &a , &b );
    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;

    }
    printf("中的是:%d",b);
}
```
## 06-5
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(1)printf("1成立\n");
    if(2)printf("2成立\n");
    if(3)printf("3成立\n");
    if(4)printf("4成立\n");
    if(0)printf("成立嗎?不成立，所以不印\n");
    if(-4)printf("-4成立\n");
    if(-3)printf("-3成立\n");
    if(-2)printf("-2成立\n");
    if(-1)printf("-1成立\n");
    if("a==0")printf("不管甚麼都會成立");
}
```
