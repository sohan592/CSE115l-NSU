//i=1 theke suru kore i<=num koleo hobe but array suru hoy 0 theke.
#include <stdio.h>
int main(){
int num;
printf("Enter array size:");
scanf("%d",&num);
int A[num];
 printf("Enter the array elements:\n");
 for(int i=0;i<num;i++){
        scanf("%d",&A[i]);
 }
 printf("Print the array elements:");
 for(int i=0;i<num;i++){
    printf("%d ",A[i]);
 }
printf("\nPrint the array elements in reverse order:");
for(int i=num-1;i>=0;i--){
    printf("%d ",A[i]);
}
return 0;
}
