#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,l,f=0,s=0;
    int n;
    char a[100][100];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(a[i]);
        if(l>f)
        {
            s=f;
            f=l;
        }
        else if(l>f&&l<s)
        {
            s=l;

        }
        
    }
    printf("%d",s);

}