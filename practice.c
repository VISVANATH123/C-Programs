#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,l;
    char a[100],*pos,w[100];
    int n;
    scanf("%d",&n);
    getchar();
    scanf("%[^\n]",a);
    l=strlen(a);
    char temp;
    for(i=0;i<n;i++)
    {
        temp=a[l-1];
        for(j=l-1;j>=0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    printf("%s",a);

    

}
    
