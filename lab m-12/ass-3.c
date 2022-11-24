#include<stdio.h>
#include<math.h>
int series(int x,int y)
{
    int i,sum=1,fact;
   for (i=1;i<=y;i++){
    fact=pow(x,i);
       sum+=fact;
   }

    return sum;
}
 int main (){

 int r,n;
 printf("Enter two parameters:");
 scanf("%d%d",&r,&n);
 int result=series(r,n);
 printf("%d",result);
 return 0;
 }
