#include<stdio.h>
int main (){
float marks;
printf("Enter yours marks:");
scanf("%f",&marks);
if (marks>=90 && marks<=100)
printf("A");
else if (marks>=70 && marks<=89.99)
printf("B");
else if (marks>=50 && marks<=69.99)
printf("c");
else
printf("F");

return 0;
   }
