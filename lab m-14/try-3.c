//Write a program reads two arrays from user and then output their product.

#include<stdio.h>
int main (){

int i,num;
printf("Enter array size :");
scanf("%d",&num);

int a[num],b[num],c[num];
printf("\nEnter the 1st array element:");
for(i=0;i<num;i++){
    scanf("%d",&a[i]);
}
printf("Enter the 2nd array element:");
for (i=0;i<num;i++){
    scanf("%d",&b[i]);
}
for (i=0;i<num;i++){
    c[i]=a[i]*b[i];
    printf("\nsum=%d*%d=%d",a[i],b[i],c[i]);

}

return 0;
}
