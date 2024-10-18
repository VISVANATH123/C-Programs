#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,l;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            continue;
        }
        else{
            printf("%c",a[i]);
        }
    }
}