#include<stdio.h>
#include<string.h>
int countSearchKey(int arr[],int size,int key){

int i,count=0;
for(i=0;i<size;i++){
    if (arr[i]==key){
          count++;
        }

}
return count;
}


int main (){
int i, num;
printf("Enter array size:");
scanf("%d",&num);
int array[num];
printf("Array Elements:");

for(i=0;i<num;i++){
    scanf("%d",&array[i]);
}
int num1;
printf("Enter search key:");
scanf("%d",&num1);
int result=countSearchKey(array,num,num1);
printf("Search key appears %d times",result);
return 0;
}
