//Write a C program to read 2 integers: n and r from user and compute the value of (_^n)C_r= n!/r!(n-r)!

#include<stdio.h>

int main (){

int n,r,i,fact=1,fact2=1;
scanf("%d%d",&n,&r);

for (i=n-r+1;i<=n;i++){

    fact*=i;
}
 for(i=1;i<=r;i++){

    fact2*=i;
 }

printf("nCr=%d",fact/fact2);


return 0;

}