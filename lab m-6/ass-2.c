//2.Write a program that computes the following series using for loop: 10000+2000+400+…+8
#include<stdio.h>
int main (){

int i,sum;
for (i=10000;i>=8;i/=5){
    sum+=i;
}
printf("%d",sum);
}
