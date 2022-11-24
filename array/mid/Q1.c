#include<stdio.h>

int main (){

int year_num;
printf("Enter year number:");
scanf("%d",&year_num);
   if(year_num<1)
    printf("Invalid Year");
   else if(year_num==1)
    printf("Freshman");
   else if(year_num==2)
    printf("Sophomore");
   else if(year_num==3)
    printf("Junior");
    else if(year_num==4)
    printf("Senior");
    else
    printf("You must graduate soon");

return 0;
}
