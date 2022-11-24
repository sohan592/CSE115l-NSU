//ass-1
#include<stdio.h>
double fact_series(int x){
int i,j;
double sum=0;
for(i=1;i<=x;i++){
    int fact=1;
for (j=1;j<=i;j++){
    fact*=j;
}
if(i==x){
    sum+=1.0/fact;
}
else
   sum+=(double)i/fact;
}

return sum;
}
int main (){
int num;
printf("Enter a number:");
scanf("%d",&num);
double result=fact_series(num);
printf("sum=%lf",result);
return 0;
}
