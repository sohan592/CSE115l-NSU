//ass-2

#include<stdio.h>
int power(int a,int b)
{
return pow(a,b);
}
int main (){
int num1,num2;
printf("Enter two number:");
scanf("%d%d",&num1,&num2);
int result=power(num1,num2);
printf("sum=%d",result);
return 0;
}
//return na chaile void diya kora jai

#include<stdio.h>
#include<math.h>
void power(int a,int b)
{
int result;
result=pow(a,b);
printf("a^b=%d",result);
}
int main (){
int num1,num2;
printf("Enter two number:");
scanf("%d%d",&num1,&num2);
power(num1,num2);
return 0;
}