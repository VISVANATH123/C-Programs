#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[100][100];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
               scanf(" %c",&a[i][j]);
        }
    }
    printf("--------------------------");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%c ",a[j][i]);
        }
        printf("\n");
    }


}