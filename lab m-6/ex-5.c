/*Write a program to print all even numbers between m and n (m, n are user inputs) in reverse order.
Sample input/output (bold ones are inputs):
Enter m: 9
Enter n: 21
All even numbers between 9 and 20 in reverse order: 20, 18, 16, 14, 12, 10
*/

#include<stdio.h>
int main (){

int i,m,n;
printf("Enter user input:");
scanf("%d%d",&m,&n);
for (i=n;i>=m;i--){
    if (i%2==0)
        printf("%d,",i);
}

return 0;
}