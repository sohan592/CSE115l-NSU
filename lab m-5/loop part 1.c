//1.
//Write a C program that computes the sum of the series:  3+7+11+…+n, where n is a user input.


//Program using while loop:
/*#include<stdio.h>

int main(){                             //void main(){kono return dite hoy na}/main(){}/

int i=3,n,sum=0;

printf("Enter the value of n:");
scanf("%d",&n);

while (i<=n){

    sum+=i;
    i+=4;
}
printf("sum=%d",sum);
return 0;
}*/
//Program using for loop:
#include<stdio.h>
main (){
int i=3,n,sum=0;

printf("Enter the value of n:");
scanf("%d",&n);

for(i=3;i<=n;i+=4){
    sum+=i;
}
printf("sum=%d",sum);

}
