#include<stdio.h>
int main ()
{
    int num,num1;
    printf("Enter the array size:");
    scanf("%d",&num);
    int array[num];
    for(int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the search value:");
    scanf("%d",&num1);
    for(int i=0;i<num;i++){
        if(array[i]!=num1){
            printf("%d ",array[i]);
        }
    }

    return 0;
}
