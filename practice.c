#include<string.h>
#include<stdio.h>
int is_palin(int s,int e,char a[])
{
    while (s<e)
    {
        /* code */
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
    char longest_palin[100]={0},a[100];
    int i,j,max=0;
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
                    strncpy(longest_palin,&a[i],len);
                    longest_palin[len]='\0';

                }
            }
        }
    }
    printf("%s",longest_palin);
}