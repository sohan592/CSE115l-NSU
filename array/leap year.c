#include <stdio.h>

void main()
{
    int year;

    /* Read year from user */
    printf("Enter year : ");
    scanf("%d", &year);

    switch ((((year%4 == 0) && (year%100 !=0)) || (year%400==0)))
    {
   case 1:
     printf("Leap Year");
     break;
    //case (year%4 == 0)
   //case (year%100 !=0):
   //case (year%4 == 0):
   case 0:
    printf("Not Leap Year");
    //default:
       // printf("Not Leap Year");
    }
        return 0;

}









