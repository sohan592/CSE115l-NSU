#include<stdio.h>
#include"necessary.c"

#define pi 3.14
#define Square(x) x*x
#define MAX(a,b) (a>b)?a:b
#define IS_VALID_MARKS(x) ((x>=0) && (x<=100))

main()
{
    float r = 4.5;
    int x=5,y=7,i=0;
    int a[5] = {10,52,35,25,40};
    printf("Area of a circle:%.2f \n",pi*Square(r));
    printf("Square is: %d\n",Square(y));

    printf("Max is: %d\n",MAX(x,y));
    printf("Max is: %0.2f\n",MAX(3.56,2.89));

    if(IS_VALID_MARKS(90))
        printf("Valid Marks\n");
    else  printf("Invalid Marks\n");


    printf("The average is: %0.2f\n",average(a,5));

    sort(a,5);
    printf("Sorted data:\n");
    for(i=0;i<5;i++)
        printf("%d\n",a[i]);

}
