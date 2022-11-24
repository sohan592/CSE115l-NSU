//Write a program to display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order
#include<stdio.h>

int main (){


int i,num,digit;
 printf("Enter all decimal number\n");
 printf("Enter numbers in the range 0 - 9 :");
 scanf("%d",&num);
while(num>0){
    digit=num%10;
    printf("%d ",digit);
    num=num/10;
}
printf("%d ",num);

return 0;
}
