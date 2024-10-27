#include<string.h>
#include<stdio.h>
int main()
{
    char a[100][100];
    int l,p=0,age,i,j;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<l;i++)
    {
        int valid=1;
        for(j=0;j<10;j++)
        {
            if(a[i][j]<'0'||a[i][j]>'9')
            {
                valid=0;
                break;
            }
        }
        if(a[i][10]!='F'&&a[i][10]!='M')
        {
            valid=0;
        }
        if(valid)
        {
            age=(a[i][11]-'0')*10+(a[i][12]-'0');
            printf("%d\n",age);
            if(age>=60)
            {
                p++;
            }
            else
            {
                printf("invalid");
                return 0;
            }
        }
    
    }
    printf("%d\n",p);

}