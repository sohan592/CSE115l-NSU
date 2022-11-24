//3.Write a C program to print the first n palindrome numbers where n is an input.

#include<stdio.h>
int main (){
int i=10,m,j,digit,sum=0,count=0;
scanf("%d",&m);
while(count<m){
   sum=0;
for (j=i;j>0;j/=10){
      digit=j%10;
      sum=(sum*10)+digit;
}
if(sum==i){
    printf("%d ",i);
    count++;
   }
   i++;
}
return 0;
}