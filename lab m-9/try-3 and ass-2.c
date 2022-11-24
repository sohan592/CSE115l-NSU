//try 2......
/*#include <stdio.h> 
int main (){
 int i,m,n,j;

 printf("Enter a number:");
 scanf("%d",&m);
 for (i=1;i<=m;i++){

        for (j=1;j<=m;j++){
            if (i==m || j==1 || j==i){
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
}*/
//ass........2
#include<stdio.h>
int main (){
int m,i,j;
printf("Enter a number:");
scanf("%d",&m);
for (i=1;i<=m;i++){
        for (j=1;j<=m-i;j++){
            printf(" ");
        }
    for (j=1;j<=m;j++){
        if (i==m || j==1 || j==i){
            printf("*");
        }
        else
            printf(" ");
    }
 printf("\n");
}
return 0;
}
