//2. Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.
#include<stdio.h>
int main (){

int i=1,n;
printf("Print odd number till :");
scanf("%d",&n);
printf("All odd number 1 to %d are:\n",n);
for (i=1;i<=n;i+=2){    //Even number er khetre i=2 nite hobe.
    printf("%d\n",i);
}

}
