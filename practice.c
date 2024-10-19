#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
   char a[100],w[100],*pos;
   scanf("%[^\n]",a);
   scanf(" %[^\n]",w);
   int l;
   l=strlen(w);
   while((pos=strstr(a,w))!=NULL)
   {
     memmove(pos,pos+l,strlen(pos+l)+1);
   }
   printf("%s",a);

}