#include <stdio.h>
#include <string.h>
int main() 
{
    char a[100];
    int i,j,l,s=0,e;
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        if(a[i]==' '||a[i]=='\0')
        {
            e=i-1;
            while(s<e)
            {
                char temp=a[s];
                a[s]=a[e];
                a[e]=temp;
                e--;
                s++;
            }
            s=i+1;
        }
    }
    printf("%s",a);
}