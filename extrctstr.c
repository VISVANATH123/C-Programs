#include<string.h>
#include<stdio.h>
int main()
{
    char a[100];
    int i,l;
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            printf("%c",a[i]);
        }
    }
}