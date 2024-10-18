#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a);
    int s=0,e;
   
    e=strlen(a)-1;
        while(s<e)
        {
        char temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
        }
    
    printf("%s",a);
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            printf("%c",a[i]);
        }
    }
}