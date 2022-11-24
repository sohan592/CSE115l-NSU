#include<stdio.h>

int main (){
int age ;
printf("Enter the age:");
scanf("%d",&age);
if (age>=25 && age<=45){
    printf("He are eligible to work");
}
else{
    printf("\"You are too young or too old\"");
}




return 0;
}
