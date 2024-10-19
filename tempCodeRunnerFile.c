#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,l;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        if(a[i]==' '||i==0)
        {
        j=(i==0)?i:i+1;
        while(j<=l)
        {
            printf("%c",a[j]);
           j++;
        }
        if(i>0)
         printf(" ");
        l=i-1;
        }

    }
   
}


    
