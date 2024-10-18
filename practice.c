#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100],b[100];
    int l,i,j;
    scanf("%[^\n]",a);
    int f[26]={0};
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        a[i]=tolower(a[i]);
        f[a[i]-'a']++;
    }
    
    for(i=0;i<26;i++)
    {
        if(f[i]==0)
        {
            printf("Not panagram");
            return 0;
        }
    }
    printf("Panagram string");
    
    
}