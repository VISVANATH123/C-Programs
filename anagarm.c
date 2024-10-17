#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int l,i;
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    if(strlen(a)!=strlen(b))
    {
        printf("Not angagram");
    }
    int c1[256]={0},c2[256]={0};
    for(i=0;a[i]!='\0';i++)
    {
        c1[tolower(a[i])]++;
        c2[tolower(b[i])]++;
    }
    for(i=0;i<256;i++)
    {
        if(c1[i]!=c2[i])
        {
            printf("Not anagram");
            return 0;
        }
    }
    printf("anagram string");
}