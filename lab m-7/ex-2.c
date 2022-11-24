//2.Write a C program to check whether an input number is a perfect number or not

#include <stdio.h>

int main() {

    int m, sum=0,i;
    printf("Enter a number:");
    scanf("%d",&m);
    printf("Proper factor are:");
    for (i=1;i<m;i++){
         if (m%i==0){
            sum+=i;
            printf("%d, ",i);
         }

    }
    if(sum==i)
printf("\n%d is a perfect number",i);
else
    printf("%d is not a perfect number",i);
return 0;
}
