#include<string.h>
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();
    char a[100][100];
    char w1[100],w2[100];
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",a[i]);
    }
    scanf(" %[^\n]",w1);
    scanf(" %[^\n]",w2);
    int index1=-1,index2=-1;
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],w1)==0)
        {
            index1=i;
        }
        if(strcmp(a[i],w2)==0)
        {
            index2=i;
        }
    }
    if(index1!=-1&&index2!=-1)
    {
        printf("%d",index2-index1);
    }
    else
    {
        printf("Not found");
    }


}