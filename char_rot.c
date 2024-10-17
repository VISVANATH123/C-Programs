#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l;
     int n,i;
    scanf("%d",&n);
    getchar();
    scanf(" %[^\n]",a);
    l=strlen(a);
    char temp;
    //left-rotation//
    for(i=0;i<n;i++)
    {
        temp=a[0];
        for(int j=0;j<l;j++)
        {
            a[j]=a[j+1];
        }
        a[l-1]=temp;


    }
    //right-rotation
    //for(i=0;i<n;i++)
    //{
        //temp=a[l-1];
        //for(int j=l-1;j>=1;j--)
        //{
            //a[j]=a[j-1]        
        //}
        //a[0]=temp;
    //}
    
    
    printf("%s",a);
}