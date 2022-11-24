//4.Write a program that prints ALL indexes in which the smallest value of array is present. 

#include<stdio.h>
int main (){
int i,num;
printf("Enter array size :");
scanf("%d",&num);
int array[num];
int min=array[0];
printf("Enter an array elements:");
for (i=0;i<num;i++){
    scanf("%d",&array[i]);
}
for(i=0;i<num;i++){
    printf("%d ",array[i]);
}
for(i=1;i<num;i++){
    if(min>array[i])
     min=array[i];
}
printf("\nThe smallest value:%d",min);

return 0;
}
