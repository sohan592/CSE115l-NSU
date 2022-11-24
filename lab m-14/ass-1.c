#include<stdio.h>
int main (){
int i,num,num1;
int flag=0,count=0;
printf("Enter array size :");
scanf("%d",&num);
int array[num];
printf("Enter an array elements:");
for (i=0;i<num;i++){
    scanf("%d",&array[i]);
}
printf("Enter the search number:");
scanf("%d",&num1);
for (i=0;i<num;i++){
        count++;
    if (array[i]==num1){
        flag=1;
        break;
}
}
if(flag==1){
    int k=count;
 for (i=k;i<num-1;i++){
    array[i]=array[i+1];
    num--;
 }
 for (i = 0; i < num; i++)
    printf("%d ", array[i]);


}
return 0;
}


//search number nai korte...

#include<stdio.h>
int main (){
int i,num,num1;
int flag=0,count=0;
printf("Enter array size :");
scanf("%d",&num);
int array[num];
printf("Enter an array elements:");
for (i=0;i<num;i++){
    scanf("%d",&array[i]);
}
printf("Enter the search number:");
scanf("%d",&num1);
for (i=0;i<num;i++){
        count++;
    if (array[i]==num1){
        flag=1;
        break;
}
}
if(flag==1){
    int k=count-1;
 for (i=k;i<num-1;i++){
    array[i]=array[i+1];
 }
  num--;
 for (i = 0; i < num; i++)
    printf("%d ", array[i]);


}
return 0;
}
