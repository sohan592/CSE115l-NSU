#include<stdio.h>

int main (){

int rows,coloms;
float n;
printf("Enter a decimal number:");
scanf("%f",&n);
printf("Enter the rows:");
scanf("%d",&rows);
printf("Enter the coloms:");
scanf("%d",&coloms);
int A[rows][coloms];
printf("Enter the array elements:");
for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
       printf("A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
    }

}
printf("\n\n");
for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
        printf("%.2f  ",n*A[i][j]);
    }
    printf("\n");

}

return 0;
}
