#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,l,j;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a);
    int count=0;
    for(i=0;i<l;i++)
    {
        count=1;
        for(j=i+1;j<l;j++)
        {
            if(tolower(a[i])==tolower(a[j]))
            {
            count++;
            a[j]='\0';
            }
        }
        if(count==1)
        {
            printf("%c",a[i]);
        }
    }
}