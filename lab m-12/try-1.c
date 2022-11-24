// Write C program using a function to check if a given number is positive, negative, or zero.

#include<stdio.h>
void PNZ(int X)
{
    if (X>0)
        printf("Positive");
else if(X<0)
    printf("Negative");
    else
        printf("Zero");

}

int main (){
 int m;
printf("Enter a number :");
scanf("%d",&m);
PNZ(m);
return 0;
}
