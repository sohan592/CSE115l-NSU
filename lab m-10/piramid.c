#include <stdio.h>

int main()
{
    int i,j,m;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=i;j<m;j++)
        {
            printf(" ");
        }
        for(j=1;j<(i*2);j++)
        {
                printf("*");
        }
        printf("\n");
    }
    for(i=m-1;i>=1;i--)
    {
        for(j=m;j>i;j--)
        {
                printf(" ");
        }
        for(j=1;j<(i*2);j++)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;

}
