//5.Write a C program to print the digits of a given number in words using recursion

#include<stdio.h>
void Number_words(int x){
  if(x==0)
    return 0;
      Number_words(x/10);
    switch(x%10){
        case 0:printf("zero ");break;
        case 1:printf("One ");break;
        case 2:printf("Two ");break;
        case 3:printf("Three ");break;
        case 4:printf("Four ");break;
        case 5:printf("Five ");break;
        case 6:printf("Six ");break;
        case 7:printf("Seven ");break;
        case 8:printf("Eight ");break;
        case 9:printf("Nine ");break;

    }
   // Number_words(x/10);  reverse number

}
int main (){
int n;
printf("Enter a number :");
scanf("%d",&n);
Number_words(n);
return 0;
}
