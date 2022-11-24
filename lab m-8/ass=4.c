
//4.	Write a C program to compute the sum of the series: 1/1! + 1/2! + 1/3! + … + 1/n! where n is an input.
#include<stdio.h>

void main (){
int i,n;
double sum=0,fact=1;
printf("enter a number:");
scanf("%d",&n);
for (i=1;i<=n;i++){
    fact=fact*i;
    sum=sum+(1.0/fact);
}
printf("%lf",sum);

}

#include<stdio.h>

int main (){

int j,n,i;
double fact2,sum=0;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    int fact=1;
for (j=1;j<=i;j++){
    fact*=j;
}
  printf("1/%d! +",i);
   fact2=(1.0/fact);
   sum+=fact2;
}
printf("\n%lf",sum);
return 0;

}
