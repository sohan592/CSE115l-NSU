#include <stdio.h>
int reverse(int x)
{
    int digit,sum=0;
    while (x!=0){
        digit=x%10;
        sum=(sum*10)+digit;
        x/=10;
    }
    return sum;
}
 int main (){

 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 int result=reverse(num);
 printf("%d",result);
 return 0;
 }
