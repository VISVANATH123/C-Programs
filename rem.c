#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int i,j,l;
    char a[100];
    scanf(" %[^\n]",a);
    l=strlen(a);
    char w[100];
    scanf(" %[^\n]",w);
    char *pos;
    while((pos=strstr(a,w))!=NULL)
    {
        memmove(pos,pos+l,strlen(pos+l)+1);
    }
    printf("%s",a);
}