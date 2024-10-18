#include<string.h>
#include<stdio.h>
int main()
{
    int l,i;
    char a[100];
    scanf("%[^\n]",a);
    l=strlen(a);
    int count;
        for(i=0;i<l;i++)
        {
            count=1;
            while(i<l-1&&a[i]==a[i+1])
            {
                count++;
                i++;
            }
            if(count>1)
            {
                printf("%c>=%d\n",a[i],count);
            }

        }
       
        
    
}