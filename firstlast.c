#include<string.h>
#include<stdio.h>

int main()
{
    int l,j,s=0,e,i;
    char a[100],b[100];
    scanf(" %[^\n]",a);
    e=strlen(a)-1;
    while(a[s]!=' '&&a[s]!='\0')
    {
        b[s]=a[s];
        s++;
    }
    b[s]='\0';
    while(e>=0&&a[e]!=' ')
    {
        e--;
    }
    char c[100];
    for(i=e+1;i<strlen(a);i++)
    {
        c[i]=a[i];
    }
    
    c[i]='\0';
    printf("%s",c);
    printf("\n");
    printf("%s",b);
}