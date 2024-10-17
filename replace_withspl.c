#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100];
    int i,j;
    char s;
    scanf("%[^\n]",a);
    scanf(" %c",&s);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i]=s;
        }
       
    }
    printf("%s",a);
}