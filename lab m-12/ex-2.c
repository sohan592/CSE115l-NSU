//ex-2
#include<stdio.h>
#include<math.h>
int sum_series(int x)
{
    int i,sum=0,term;
    for(i=1;i<=x;i++){
        term=i*i;
        sum+=term;
    }
    return sum;
}
int main (){
int num;
printf("Enter a number :");
scanf("%d",&num);
int resut=sum_series(num);
printf("sum=%d\n",resut);
return 0;
}
