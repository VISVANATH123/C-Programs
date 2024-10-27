#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    int sum=0,num=0;
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i]))
        {
            num=num*10+(a[i]-'0');
        }
        else
        {
            sum+=num;
            num=0;
        }
    }
    sum+=num;
    printf("sum=%d\n",sum);
}