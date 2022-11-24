#include <stdio.h>
int main()
{
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    int array1[20],array2[20];
    printf("Enter the array1 elements:");
    for(int i=0;i<size;i++){
       scanf("%d",&array1[i]);
    }
    printf("Enter the array2 elements:");
    for(int i=0;i<size;i++){
       scanf("%d",&array2[i]);
    }
    printf("Print the common elements of two array:");
    for(int i=0;i<size;i++){
     for (int j=0;j<size;j++){
        if(array1[i]==array2[j]){
            printf("%d ",array1[i]);
        }
     }
    }
    return 0;
}
