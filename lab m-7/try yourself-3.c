//Write a C program to find all the factors of a number
//Write a C program to print all the odd factors of a given number
#include <stdio.h>

void main()
{
    int i, num;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);	    for(i=1; i<=num/2; i++)
    //highest possible factor of num is: num/2
    {
     // If num is exactly divisible by i, then i is a factor of num
        if(num%i==0 && i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}
