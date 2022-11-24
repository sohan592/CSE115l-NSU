//3.Write a C program to print the 2nd largest & 2nd smallest elements of an array.
#include<stdio.h>
int main (){
int i,j,num;
int count=0;
printf("Enter array size :");
scanf("%d",&num);
int array[num];
printf("Enter an array elements:");
for (i=0;i<num;i++){
    scanf("%d",&array[i]);
}
for (i=0;i<num;i++){
        int temp;
        for(j=i+1;j<num;j++){
        if(array[i]<array[j]){  //if(array[i]>array[j])
           temp=array[i];
           array[i]=array[j];
           array[j]=temp;
}
 }
 printf("%d ",array[i]);
  }

printf("\nThe second smallest value:%d",array[num-2]);
printf("\nThe second largest value:%d",array[1]);
return 0;
}
