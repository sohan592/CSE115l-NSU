//ex-2....
/*#include <stdio.h>
void main()
{
    int i, j, rows;
    printf("Enter no. of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows;i++){
         for(j=1;j<=rows-i;j++)
            printf(" ");
         for(j=1;j<=i;j++)
           printf("%c",'A'+j-1);
        printf("\n");
    }
}*/
//ex-3....
#include <stdio.h>
void main()
{
    int i, j, rows;
    printf("Enter no. of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows;i+=2){
            for(j=1;j<=(rows-i)/2;j++)
            printf(" ");
         for(j=1;j<=i;j++)
           printf("%c",65+j-1);
        printf("\n");
    }
}
