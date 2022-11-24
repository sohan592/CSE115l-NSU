#include<stdio.h>
int main (){
int num,i,max;
printf("Enter the array size:");
scanf("%d",&num);
int array[num];
printf("Enter %d of index:\n",num);
for (i=0;i<num;i++){
    printf("Print all index:");
    scanf("%d",&array[i]);
}
 max=array[0];
for (i=1;i<num;i++){
    if (max<array[i])
        max=array[i];
}
printf("Largest=%d",max);

return 0;
}
