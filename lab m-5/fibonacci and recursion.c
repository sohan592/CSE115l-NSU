//fibonacci and recursion

#include<stdio.h>
/*
int factorial(int n)
{
    if (n==0)
       return 1;    // recursion formula
    else
        return(n*factorial(n-1));

}


int main (){
  int n;
  scanf("%d",&n);
  printf("%d",factorial(n));

return 0;
}
*/
int fibonacci(int n)
{
    if (n==0)
       return 0;
       else if (n==1)
            return 1;        // fibonacci formula
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main (){
  int n;
  scanf("%d",&n);
  printf("%d",fibonacci(n));

return 0;
}
