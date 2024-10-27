// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() 
{
   char a[100],b[100];
   scanf("%[^\n]",a);
   scanf(" %[^\n]",b);
   
   int i=0,j=0;
   int l1=strlen(a),l2=strlen(b);
   
   printf("%s and %s are",a,b);
   
   while(a[i]=='0')
       i++;
    if(i>0)
       strcpy(a,&a[i]);
       
    while(b[j]=='0')
        j++;
    if(j>0)
        strcpy(b,&b[j]);
        
    int res=strcmp(a,b);
    
    if(res==0)
         printf(" Equal");
    else if(res>0)
         printf(" Greater");
    else if(res<0)
         printf(" Lesser");
    
    return 0;
}