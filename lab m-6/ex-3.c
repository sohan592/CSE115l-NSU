//3.Write a program to compute the following series using while loop: 4+11+18++….+n
#include<stdio.h>
int main (){
int i,n,sum=0;
printf("Enter a number:");
scanf("%d",&n);
for (i=4;i<=n;i+=7){
    sum+=i;
}
printf("%d",sum);
return 0;
}
