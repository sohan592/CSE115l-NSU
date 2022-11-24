
#include<stdio.h>
int main (){
int i,j,m;
printf("Enter a number:");
scanf("%d",&m);
for (i=1;i<=m;i++){
    for (j=1;j<=m-i;j++)
        printf(" ");
    for (j=1;j<=m;j++){
        if (i==1 || i==m || j==1 || j==m)
        printf("*");
        else
            printf(" ");
    }
    printf("\n");
}

return 0;
}
