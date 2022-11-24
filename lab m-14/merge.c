
//i pothom e initialization kore nite hobe.for er moddhe korle hobe nah.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size1,size2,i,k;
    int array1[50],array2[50],merge[100];
    printf("Enter the array1 size:");
    scanf("%d",&size1);
    printf("Enter the array1 elements:");
    for(i=0;i<size1;i++){
       scanf("%d",&array1[i]);
       merge[i]=array1[i];
    }
     k=i;
    printf("Enter the array2 size:");
    scanf("%d",&size2);
    printf("Enter the array2 elements:");
    for(i=0;i<size2;i++){
       scanf("%d",&array2[i]);
       merge[k]=array2[i];
         k++;
    }
    printf("Print the elements of new array:");
    for(i=0;i<k;i++){
            printf("%d ",merge[i]);
    }
    return 0;
}
