//  2n!/n!
#include<stdio.h>
int main (){
int i,n,fact=1,fact2=1;
scanf("%d",&n);
for (i=1;i<=2*n;i++){
    fact*=i;
}
for (i=1;i<=n;i++){
    fact2*=i;
}
printf("%d",fact/fact2);
return 0;
}