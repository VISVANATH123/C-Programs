#include<string.h>
#include<stdio.h>
int main()
{
    int max=0,min=100;
    char *w,a[100];
    char small[20],longest[100];
    scanf("%[^\n]",a);
    w=strtok(a," ");
    while(w!=NULL)
    {
        int l=strlen(w);
        if(l>max)
        {
            max=l;
            strcpy(longest,w);
        }
        if(l<max)
        {
            min=l;
            strcpy(small,w);
        }
        w=strtok(NULL," ");
    }
    printf("%s>=%d\n",small,min);
    printf("%s>=%d\n",longest,max);

}