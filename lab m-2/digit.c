\\ last digit and  others normally solve.

#include<stdio.h>
int main (){
int n,last_digit,others;
printf("Enter a number :");
scanf("%d",&n);
last_digit=n%10;
others=n/10;
printf("%d\n",last_digit);
printf("%d",others);

return 0;
}
