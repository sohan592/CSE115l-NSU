#include<stdio.h>

int main (){

int i,n1,n2,rem,gcd,num1,num2;
printf("Enter any two number to find gcd:");
scanf("%d %d", &num1, &num2);
n1=num1;
n2=num2;
while (n2!=0){
    rem=n1%n2;
    n1=n2;
    n2=rem;
}
gcd=n1;
printf("\nGCD of %d and %d = %d\n", num1,num2, gcd);
return 0;
}
