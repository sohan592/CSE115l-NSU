//4.	Write a C program to compute the sum of digits of an input number and check if this sum is a prime or not

#include <stdio.h>

int main() {

    int m,digit,sum=0;
    printf("Enter a number:");
    scanf("%d",&m);
    while(m!=0){
        digit=m%10;
         m=m/10;
         sum+=digit;
    }
    printf("sum of digits:%d\n",sum);

    int i,isprime=1;
    int temp=sum;
    for(i=2;i<=temp/2;i++){
     if(temp%i==0){
     isprime=0;
     break;
     }
    }
   if(isprime==1)
   printf("%d is a prime number",temp);
  else
    printf("%d is not a prime number",temp);

return 0;
}
