//3.	Write a C program to read any integer from user and compute the reverse of given number. Also output whether the reverse number is prime or not

#include <stdio.h>

int main() {

    int m,digit,sum=0;
    printf("Enter a number:");
    scanf("%d",&m);
    printf("Reverse number are:");
    while(m!=0){
        digit=m%10;
        sum=(sum*10)+digit;
        m=m/10;
    }
    printf("%d\n",sum);

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
