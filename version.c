#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf(" %[^\n]",a);
    scanf(" %[^\n]",b);
    int l1=strlen(a);
    int l2=strlen(b);
    int x1=0,x2=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='.')
        {
            x1=(x1*10)+(a[i]-'0');
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]!='.')
        {
            x2=(x2*10)+(b[i]-'0');
        }
    }
    if(x1>x2)
    {
        printf("%s is greater than %s",a,b);
    }
    else if(x1<x2)
    {
        printf("%s is greater than %s",b,a);
    }
    else if(x1==x2)
    {
        printf("%s is equal to %s",a,b);

    }
    
    
}