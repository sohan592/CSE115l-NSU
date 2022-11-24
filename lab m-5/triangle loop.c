#include<stdio.h>
int main (){
int i,j,m,n;
printf("Enter number:");
scanf("%d%d",&m,&n);
for (i=1;i<=m;i++){
    for (j=1;j<=n-i;j++)
        printf(" ");
    for (j=1;j<=n;j++){
        if (i==1 || i==m || j==1 || j==n)
        printf("*");
        else
            printf(" ");
    }
    printf("\n");
}

return 0;
}
