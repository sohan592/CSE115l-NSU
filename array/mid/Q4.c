#include<stdio.h>
int main (){
int i,j,rows;
printf("Enter a number:");
scanf("%d",&rows);
for (i=1;i<=rows;i++){
        if (i%2!=0){
    for (j=1;j<=rows;j++){
        if(j%2!=0){
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    }
 else
 for (j=1;j<rows;j++){
        if(j%2==0){
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
