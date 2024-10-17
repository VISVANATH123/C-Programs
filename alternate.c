#include<string.h>
#include<stdio.h>
int main()
{
    int l,i;
    char a[100],b[100];
    scanf("%s",a);
    l=strlen(a)-1;
  
    
    for(i=0;i<=l;i++)
    {
        if(i%2!=0)
        {
           a[i]='1';
        }
       
    }
    for(i=l;i>=0;i--)
    {
        if(a[i]=='1')
        {
            continue;
        }
        printf("%c",a[i]);
    }
}