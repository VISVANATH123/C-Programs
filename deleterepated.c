#include<string.h>
#include<stdio.h>
int main()
{
    char a[100],r[100]={0};
    scanf("%[^\n]",a);
    int index=0;
    char *token=strtok(a," ");

    while(token!=NULL)
    {
        if(strstr(r,token)==NULL)
        {
            if(index>0)
            {
                r[index++]=' ';
            }
            strcpy(&r[index],token);
            index+=strlen(token);
        }
        token=strtok(NULL," ");
    }
    printf("%s",r);
}