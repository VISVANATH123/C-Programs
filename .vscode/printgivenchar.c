#include<string.h>
#include<stdio.h>
int main()
{
    int l,i;
    char a[100];
    int index=-1;
    scanf("%s",a);
    l=strlen(a);
    char c,r;
    scanf(" %c",&c);
    scanf(" %c",&r);
    /*for(i=0;i<l;i++)
    {
        if(a[i]==c)
        {
            index=i;
        }
        if(index!=-1)
        {
            a[index]=r;
        }

    }*/
    for(i=0;i<l;i++)
    {
        if(a[i]==c)
        {
            a[i]=r;
        }
    }
    printf("%s",a);
}