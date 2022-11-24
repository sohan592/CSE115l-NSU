#include<stdio.h>
int main (){
int i,j,n,sum=0,fact,sum2=0,result;
printf("Enter a number:");
scanf("%d",&n);
for (i=1;i<=n;i+=5){
    if(i%2!=0){
        fact=i*i;
        sum+=fact;
    }
}
 for (i=1;i<=n;i+=5){
    if (i%2==0){
        sum2+=i;
    }
 }
  result=sum+sum2;
printf("%d",result);


return 0;
}
//
#include<stdio.h>
int main (){
int i=1,j,n,sum=0,fact,sum2=0,result;
printf("Enter a number:");
scanf("%d",&n);
while(i<=n){
    if(i%2!=0){
        fact=i*i;
        sum+=fact;
    }
    if (i%2==0){
        sum2+=i;
    }
    i+=5;
}
  result=sum+sum2;
printf("%d",result);


return 0;
}
