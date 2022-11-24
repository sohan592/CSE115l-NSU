#include <stdio.h>
int main(){
 int num;
 printf("Enter the array size:");
 scanf("%d",&num);
int a[num];
int *ptr=a;
printf("Enter the array elements:");
for(int i=0;i<num;i++){
    scanf("%d",ptr);
    ptr++;
}
ptr=a;
printf("Print the value:");
for(int i=0;i<num;i++){
    printf("%d ",*ptr);
    ptr++;
}


return 0;
}
