//1.Write a C program to print hollow rhombus star pattern of N lines. E.g. for N=5 print
#include <stdio.h> 
int main (){
 int i,m,n,j;

 printf("Enter a number:");
 scanf("%d",&m);
 for (i=1;i<=m;i++){
        for (j=1;j<=m-i;j++){
            printf(" ");
        }
        for (j=1;j<=m;j++){
            if (i==1 || i==m || j==1 || j==m){
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


