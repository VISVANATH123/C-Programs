#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=1;i<=l;i+=2)
    {
        char temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    printf("%s ",a);
    
}