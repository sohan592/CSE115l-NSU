//Try yourself 1: Write a program that prints the no. of odd & no. of even numbers in an array.

#include<stdio.h>
int main (){

int i,num,count_even=0,count_odd=0;
printf("Enter array size :");
scanf("%d",&num);

int array[num];
printf("\nEnter the array element:");
for(i=0;i<num;i++){
    scanf("%d",&array[i]);
}
printf("Print all even number :");

for (i=0;i<num;i++){

    if (array[i]%2==0)
        printf("%d \n",array[i]);
    if (array[i]%2==0)
        count_even++;
}
printf("\ncounteven=%d",count_even);
printf("\nPrint all odd number :");
for (i=0;i<num;i++){

    if (array[i]%2!=0)
        printf("%d \n",array[i]);
         if (array[i]%2!=0)
         count_odd++;

}
printf("\ncountodd=%d",count_odd);



return 0;
}
