#include<stdio.h>
int main ()
{
    int num;
    printf("Enter the array size:");
    scanf("%d",&num);
    int array[num];
    printf("Input elements in array:");
    for(int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    printf("Even elements in array:");
    for(int i=0;i<num;i++){
        if(array[i]%2==0){
            printf("%d ",array[i]);
        }
    }
    printf("\nOdd elements in array:");
    for(int i=0;i<num;i++){
        if(array[i]%2==1){
            printf("%d ",array[i]);
        }
    }

    return 0;
}
