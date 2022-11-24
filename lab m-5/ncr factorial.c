//ncr factorial
#include<stdio.h>

int main (){

int n,r,factN=1,factR=1,i,factN_R=1;
scanf("%d%d",&n,&r);
for (i=1;i<=n;i++){
    factN*=i;
}
  for (i=1;i<=r;i++){
    factR*=i;
}
for (i=1;i<=n-r;i++){
    factN_R*=i;
}
int result;

result =factN/(factR*factN_R);
printf("%d",result);



return 0;
}


