
//Write a function which will display sum of two arrays using pointers.

#include <stdio.h>
int  main (){
int num;
printf("Enter array size:");
scanf("%d",&num);
int array[num],array1[num];
int *ptr=array;
int *ptr1=array1;
for(int i=0;i<num;i++){
    scanf("%d",ptr);
    ptr++;
}
ptr=array;
for(int i=0;i<num;i++){
    scanf("%d",ptr1);
    ptr1++;
}
ptr1=array1;
printf("Sum of two array:");
for(int i=0;i<num;i++){
    printf("%d ",(*ptr)+(*ptr1));
    ptr++;
    ptr1++;
}
}

