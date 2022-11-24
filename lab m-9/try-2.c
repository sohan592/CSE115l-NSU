//Write a C program to print a hollow rectangle pattern of size m*n. For e.g. for m=10, n=5 print:
#include <stdio.h> 
int main (){
 int i,m,n,j;
 printf("Enter rows:");
 scanf("%d",&n);
 printf("Enter coloums:");
 scanf("%d",&m);
 for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
            if (i==1 || i==n || j==1 || j==m){
                printf("*");
            }
            else
            {
                printf(" ");
            }
    }
  printf("\n");
 }
return 0;
}
