#include<stdio.h>
/*
int sum (int a,int b)
{
    return a+b;

}
 int main (){
 int num1,num2,result;

printf("Enter two number:");
scanf("%d%d",&num1,&num2);
result=sum(num1,num2);
printf("the sum=%d",result);

}
*/

void sum (int a,int b,int c)
{
    //int sum=a+b+c;
   printf("the sum=%d\n",a+b+c);
}
void substraction (int a,int b)
{
   printf("the substraction=%d\n",a-b);

}
void multi (int a,int b,int c)
{
   printf("the multi=%d\n",a*b*c);

}
int main (){
 sum(10,20,30);
  substraction(50,20);
  multi(4,4,4);
}



