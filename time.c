#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,l;
    char t[9];
    int h,m,s;
    scanf("%8s",t);
    sscanf(t,"%d:%d:%d",&h,&m,&s);
    printf("%d hours:%d minutes:%dseconds",h,m,s);

}