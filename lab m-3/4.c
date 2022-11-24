#include <stdio.h>
int main() {
int x;
printf("Input an integer: ");
scanf("%d", &x);
if(x%5==0 || x%11==0 )
{
 printf("%d is a valid number\n",x);
}
else 
{
 printf("%d is an invalid number\n",x);
}
  return 0;
} 