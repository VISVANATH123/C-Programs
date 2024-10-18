#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l,i,j;
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!='\0')
        {
            for(j=i+1;j<l;j++)
            {
                if(a[i]==a[j])
                a[j]='\0';
            }
            printf("%c",a[i]);
        }
    }
}