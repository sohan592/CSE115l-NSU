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

    for(int i=0;i<size;i++){
        array2[i]=array1[i];
    }
    printf("\nAfter copy array2:");
    for(int i=0;i<size;i++){
       printf("%d ",array2[i]);
    }

    return 0;
}
