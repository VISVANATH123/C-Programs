#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j;
    char a[100],b[100];
    scanf("%[^\n]",a);
    int l=strlen(a);
    int count=0;
    int min=l,max=0;
    char c;
    for(i=0;i<l;i++)
    {
        count=1;
        if(a[i]!='\0')
        {
            for(int j=i+1;j<l;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]='\0';
                }
            }
            if(count<min)
            {
                min=count;
                c=a[i];
            }
           /* if(count>max)
            {
                max=count;
                c=a[i];
            }*/
        }
        
    }
        printf("%c",c);

    

}
    
