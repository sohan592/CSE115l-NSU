//as...2
/*#include<stdio.h>

int main (){
int i,j,m;
printf("Enter a number:");
scanf("%d",&m);
for (i=1;i<=m;i++){
    for (j=1;j<=i;j++){
        printf("%c ",'A'+i-1);
    }

printf("\n");
}
return 0;
}*/

//ass....3
#include<stdio.h>

int main (){
int i,j,m;
int k=1;
printf("Enter a number:");
scanf("%d",&m);
for (i=1;i<=m;i++){     //for ass-3...i+=2..dilai okk.
    for (j=1;j<=i;j++){
        if(k<=9){
        printf("%d",k++);
        }
        else if(k>9){
            printf("%d",k=0);
             k++;
         }
    }

printf("\n");
}
return 0;
}
