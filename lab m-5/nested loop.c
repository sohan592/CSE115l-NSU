
#include<stdio.h>

int main (){

int n,i,j;
printf("Enter a number:");
scanf("%d",&n);
for(i=n;i>=1;i--)
//for (i=1; i<=n; i++)
{
    for (j=1;j<=i;j++)
       printf("*");
      for (j=1; j<=n-i; j++){
        printf(" ");
      }
     // for (j=1;j<=i;j++)
      //  printf("*");


 printf("\n");
}



return 0;

}