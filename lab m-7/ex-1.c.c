//take digit  and their adddition.

#include <stdio.h>
int main()
{
    int number,digit,sum=0;
    printf("Enter a digit:");
    scanf("%d", &number);
    while(number > 0)
    {
        digit = number % 10;
        printf("%d",digit);
        number = number / 10;
       sum+=digit;
    }
printf("\nsum=%d", sum);
printf("\n%d",number);
    return 0;
}
//print first digit and last digit.

{
    int number,first_digit,last_digit;
    printf("Enter a digit:");
    scanf("%d", &number);
   last_digit = number % 10;
    while(number >10)
    {
        number = number / 10;
        first_digit=number;
    }
printf("\nfirst_digit=%d",first_digit);
printf("\nlast_digit=%d",last_digit);
return 0;
}
