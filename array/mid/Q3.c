#include<stdio.h>
int main () {
int num,count=0,digit,last_digit,first_digit;
printf("Enter a number:");
scanf("%d",&num);
int temp=num;
while (num!=0){
       count++;
        num=num/10;
}
if(count==4){
last_digit=temp%10;
while(temp>9){
        temp=temp/10;
}
first_digit=temp;
printf("First digit=%d\n",first_digit);
printf("Last digit=%d\n",last_digit);

}
else
{
    printf("Not a valid number");
}

return 0;

}
