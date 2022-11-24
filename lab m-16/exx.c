#include <stdio.h>
int main(){
int num;
printf("Enter array size:");
scanf("%d",&num);
int A[num][num];
 printf("Enter the array elements of A:\n");
 for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        printf("A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
    }
 }
 printf("Print the array value:\n");
  for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
        printf("%4d",A[i][j]);
    }
    printf("\n");
 }
 printf("\n");
 for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
            if(i==j){  //i+j==num-1
        printf("%d",A[i][j]);
    }
    else
        printf(" ");
    }
    printf("\n");
 }

return 0;
}
