
//1.Write a C program to print all palindrome numbers between m and n (m,  n are inputs)
#include <stdio.h>

int main() {
     int add=0;
    int i,j, m,digit,sum=0,n;
    printf("Enter two number:");
    scanf("%d%d",&m,&n);
  for(i=m;i<=n;i++){
        sum=0;
       for(j=i;j>0;j/=10){
        digit=j%10;
        sum=(sum*10)+digit;

    }
  if(sum==i){
   printf("%d is pallindrome\n",i);
   add+=i;
  }
  }
  printf("sum=%d",add);
return 0;
}
