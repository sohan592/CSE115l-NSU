//4.Write a C program to compute sum of digits of a given number using recursion


#include<stdio.h>
int Sum_Digits(int x){

  if(x==0)
    return 0;
   else
     return ((x%10) + Sum_Digits(x/10));
  }


int main (){
int n;
printf("Enter a number :");
scanf("%d",&n);
 int add=Sum_Digits(n);
 printf("sum=%d",add);
return 0;
}
