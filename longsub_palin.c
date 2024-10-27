#include<string.h>
#include<stdio.h>
int is_palin(int s,int e,char a[])
{
    while(s<e)
    {
        if(a[s]!=a[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main()
{
    int max=0,i,j;
    char long_palin[100]={0};
    char a[100];
    scanf("%[^\n]",a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i;j<strlen(a);j++)
        {
            if(is_palin(i,j,a))
            {
                int len=j-i+1;
                if(len>max)
                {
                    max=len;
                    strncpy(long_palin,&a[i],len);
                    long_palin[len]='\0';
                }
            }

        }
    }
    printf("%s",long_palin);
}