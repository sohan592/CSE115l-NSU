/* Ask user to enter his/her name and age. Then print the following message:

Hello, USER'S NAME!

You are USER'S AGE years old.
*/

#include<stdio.h>

int main (){

char name[50];
int age;

printf("Enter your name:");
gets (name);
printf("Enter your age:");
scanf("%d",&age);

printf("Hello,%s!\n You are %d years old",name,age);

return 0;
}




