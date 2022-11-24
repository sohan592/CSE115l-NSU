#include<stdio.h>
#include<math.h>
int main (){

float x1,x2,y1,y2,a,b;

printf("Enter one point(x1,y1):\n");
scanf("%f%f",&x1,&y1);
printf("Enter other point(x2,y2):\n");
scanf("%f%f",&x2,&y2);
a=(x1+x2)/2;                //Midpoint(a,b)=((x1+x2)/2,(y1+y2)/2)
b=(y1+y2)/2;

printf("The midpoints formula (a,b):(%.2f , %.2f)",a,b);


return 0;

}

