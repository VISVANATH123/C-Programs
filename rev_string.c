#include<string.h>
#include<stdio.h>
int main()
{
    int i,l;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a)-1;
    for(i=l;i>=0;i--)
    {
        if(a[i]==' '||i==0)
        {
            int j=(i==0)?i:i+1;
            while(j<=l)
            {
                printf("%c",a[j]);
                j++;
            }
            if(i>0) printf(" ");
            l=i-1;
        }
    }
}