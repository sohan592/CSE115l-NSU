
//Write a program to compute the following series using while loop: 5^2+9^2+15^2+23^2+....+n^2
#include<stdio.h>
int main (){

int i,m,j,result,sum;
printf("Enter user input:");
scanf("%d",&m);
for(j=2,i=5;j<=i,i<=m;i=i+(2*j),j++)
{
    result=i*i;
    sum+=result;
}
printf("%d",sum);

return 0;
}
// while
#include<stdio.h>
int main (){

int i=5,m,j=2,result,sum;
printf("Enter user input:");
scanf("%d",&m);
while(i<=m)
{
    result=i*i;
    sum+=result;
    i+=(2*j);
    j++;
}
printf("%d",sum);

return 0;
}