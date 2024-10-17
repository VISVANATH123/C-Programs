#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int m1[256]={0},m2[256]={0};
    if(strlen(a)!=strlen(b))
    {
        printf("Not ismorphic");
        return 0;
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(m1[(int)a[i]]!=m2[(int)b[i]])
        {
            printf("Not isomorphic");
            return 0;
        }
        m1[(int)a[i]]++;
        m2[(int)b[i]]++;
    }
    printf("isomorphic string");
    
}