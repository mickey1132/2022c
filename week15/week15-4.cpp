#include <stdio.h>
char line[30000];
int main()
{
    printf("�п�J�@��r���A���n���Ů��:");
    scanf("%s",line);
    int N=0;
    for(int i=0;line[i]!=0;i++)
        {
            N++;
        }
    for(int i=N-1;i>=0;i--)
        {
            printf("%c",line[i]);
        }
}
