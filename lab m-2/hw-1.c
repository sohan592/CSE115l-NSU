#include<stdio.h>
#include<math.h>
int main (){
int x;
printf("Enter a number :");
scanf("%d",&x);
float result=5*pow(x,3)-4*pow(x,2)+sqrt(x)+3;

printf("%.2f",result);

return 0;
}