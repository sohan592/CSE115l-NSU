//Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3

#include<stdio.h>
int main (){

int i,n,sum=0,fact;
printf("Enter user input:");
scanf("%d",&n);
for (i=2;i<=n;i+=3){
    fact=i*i*i;
    sum+=fact;
}
printf("%d",sum);
return 0;
}