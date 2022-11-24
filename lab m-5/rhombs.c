//take m and n input form user and print the rhombs.
#include<stdio.h>
int main (){
void rhombs(int m,int n);
int i,j,m,n;
printf("Enter a number:");
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
