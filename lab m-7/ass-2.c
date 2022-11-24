//2.Write a C program to read a number from user and check whether given number is a palindrome or not.

#include <stdio.h>

int main() {

    int m,digit,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&m);
    temp=m;
    //printf("Reverse number are:");
    while(m!=0){
        digit=m%10;
        sum=(sum*10)+digit;
       // printf("%d",digit);
        m=m/10;
    }
 if(sum==temp)
   printf("\n%d is a pallindrome number",temp);
else
    printf("%d is not a pallindrome number",temp);

return 0;
}
