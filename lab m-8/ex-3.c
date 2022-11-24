//	Write a C program to compute the super-factorial of a given number n,sf(n)= 1!*2!*3!*…n!
#include<stdio.h>

int main (){

int n,i,fact=1,fact2=1;
printf("Enter a number:");
scanf("%d",&n);

for (i=1;i<=n;i++){
    fact*=i;
    fact2*=fact;
}

printf("%d",fact2);
return 0;

}
//
#include<stdio.h>

int main (){

int j,n,i,fact2=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
       int fact=1;
for (j=1;j<=i;j++){
    fact*=j;
}
  printf("%d!*",i);
   fact2*=fact;
}
printf("\n%d",fact2);
return 0;

}
