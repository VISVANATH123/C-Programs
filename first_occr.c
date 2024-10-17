#include <string.h>
#include <stdio.h>
int main()
{
    int l;
    char a[100],w[100],*pos;
    scanf(" %[^\n]",a);
    scanf(" %[^\n]",w);
    l=strlen(w);
    int i;
    pos=strstr(a,w);
    if(pos!=NULL)
    {
        int index=pos-a;
        printf("%s word is found in %d index",w,index);
    }
    else
    {
        printf("The position not found");
    }
}