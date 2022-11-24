#include <stdio.h>
int main(){
int A[100][100],B[100][100];
int rowsA,colomsA,rowsB,colomsB;
printf("Enter rowsA:");
scanf("%d",&rowsA);
printf("Enter colomsA:");
scanf("%d",&colomsA);
printf("Enter rowsB:");
scanf("%d",&rowsB);
printf("Enter colomsB:");
scanf("%d",&colomsB);
while(colomsA!=rowsB){
   printf("Invalid dimension\n");
   scanf("%d%d",&rowsA,&colomsA);
   scanf("%d%d",&rowsB,&colomsB);
}
int result[rowsA][colomsB];
 printf("Enter the array elements of A:\n");
 for(int i=0;i<rowsA;i++){
    for(int j=0;j<colomsA;j++){
        printf("A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
    }
 }
 printf("Print the array value of A:\n");
  for(int i=0;i<rowsA;i++){
    for(int j=0;j<colomsA;j++){
        printf("%4d",A[i][j]);
    }
    printf("\n");
 }
  printf("Enter the array elements of B:\n");
 for(int i=0;i<rowsB;i++){
    for(int j=0;j<colomsB;j++){
        printf("A[%d][%d]:",i,j);
        scanf("%d",&B[i][j]);
    }
 }
 printf("Print the array value of B:\n");
  for(int i=0;i<rowsB;i++){
    for(int j=0;j<colomsB;j++){
        printf("%4d",B[i][j]);
    }
    printf("\n");
 }
  for(int i=0;i<rowsA;i++){
    for(int j=0;j<colomsB;j++){
            int sum=0;
            for(int k=0;k<colomsA;k++){
             sum+=A[i][k]*B[k][j];
    }
     result[i][j]=sum;
    }
 }
 printf("Print the result:\n");
  for(int i=0;i<rowsA;i++){
    for(int j=0;j<colomsB;j++){
        printf("%4d",result[i][j]);
    }
    printf("\n");
 }
return 0;
}
