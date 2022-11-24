#include<stdio.h>

void pyramid(int n);
 int main (){

    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n; i+=2)
    {
        for(j=1; j<=(n-i)/2; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

