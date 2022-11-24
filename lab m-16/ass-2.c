#include <stdio.h>
int main(){
int rows,coloms;
printf("Enter array rows:");
scanf("%d",&rows);
printf("Enter array coloms:");
scanf("%d",&coloms);
int A[rows][coloms],B[rows][coloms];
 printf("Enter the array elements of A:\n");
 for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
        printf("A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
    }
 }
 printf("\n");
 for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
        printf("%4d",5*A[i][j]);
    }
    printf("\n");
 }
  printf("Enter the array elements of B:\n");
 for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
        printf("B[%d][%d]:",i,j);
        scanf("%d",&B[i][j]);
    }
 }

 printf("\n");
 for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
        printf("%4d",7*B[i][j]);
    }
    printf("\n");
 }
 printf("\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<coloms;j++){
        printf("%4d",5*A[i][j]+7*B[i][j]+9);
    }
    printf("\n");
 }
return 0;
}
