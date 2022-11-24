//7.Write a C program to find power of any number using for loop

#include <stdio.h>

int main() {

    int n,m,result=1, i;
    printf("Enter base:");
    scanf("%d",&n);
    printf("Enter power:");
    scanf("%d",&m);
    for (i=1;i<=m;i++){
         result*=n;
    }
printf("%d",result);
}
