//
#include<stdio.h>
int main (){
int i,j,num;
int count=0;
printf("Enter array size :");
scanf("%d",&num);
int array[num];
printf("Enter an array elements:");
for (i=0;i<num;i++){
    scanf("%d",&array[i]);
}
int sum=0;
for(i=0;i<num;i++){
    sum+=array[i];
}
float average=sum/num;
printf("Average=%f\n",average);
 int max=average;
 for(i=0;i<num;i++){
    if (max<array[i])
     printf("%d ",array[i]);
 }

return 0;
}
