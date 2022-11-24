#include<stdio.h>
int main (){

int i,n,fact1=1,fact2=1,result;
printf("Enter any number:");
scanf("%d",&n);
for(i=1;i<=2*n;i++){
   fact1*=i;
}
for (i=1;i<=n;i++){

    fact2*=i;

}
result=fact1/fact2;
printf("%d",result);






return 0;
}
