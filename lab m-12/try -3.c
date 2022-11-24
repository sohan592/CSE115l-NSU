#include<stdio.h>
int isPrime(int X)
{
    int i,sum=0;
    for(i=1;i<X;i++)
{
    if (X%i==0)
        sum+=i;
}

 return sum;

}
int main ()
{
 int m;
printf("Enter a number :");
scanf("%d",&m);
int result= isPrime(m);
if(result==m)
    printf("Perfect");

else
    printf("Not perfect");
return 0;
}
