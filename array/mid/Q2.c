#include<stdio.h>
int main (){
int i,j=1,n,sum=1;
printf("Enter a number:");
scanf("%d",&n);
for (i=2;i<=n;i+=j){
    sum+=i;
    j+=2;
}
printf("%d",sum);
return 0;
}
