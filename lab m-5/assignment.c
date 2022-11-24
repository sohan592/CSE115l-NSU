//hollow parallelogram pattern.

#include<stdio.h>

int main (){

int i,j,r,c;
printf("Enter a number:");
scanf("%d%d",&r,&c);
for (i=1;i<=r;i++){

    for (j=1;j<=c-i;j++)
        printf(" ");
    for (j=1;j<=c;j++){
        if (i==1 || i==r || j==1 || j==c)

        printf("*");
        else
            printf(" ");
    }


    printf("\n");

}







return 0;
}
