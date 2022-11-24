//ex-1
//ex=1

#include<stdio.h>
#include<math.h>
double diameter(float x)
{
    return (2*x);
}
double circumference(float x)
{
    return (2*M_PI*x);
}
double area(float x)
{
    return (M_PI*x*x);
}


int main (){
float radius;
printf("Enter a number :");
scanf("%f",&radius);
double dia=diameter(radius);
double cir=circumference(radius);
double ar=area(radius);
printf("diameter=%lf\n",dia);
printf("circumference=%lf\n",cir);
printf("area=%lf\n",ar);
return 0;
}
