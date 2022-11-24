int main()
{
    int A[100][100], i, j, rows, columns;
    printf("Number of rows: ");
    scanf("%d",&rows);
    printf("Number of columns: ");
    scanf("%d",&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("A[%d][%d]: ",i, j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Values in array A Hollow Print:\n");
    int sum=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
             if(i==0 || i==rows-1 || j==0 || j==columns-1){
             printf("%d ",A[i][j]);
             sum+=A[i][j];
        }
         else
            printf("  ");
        }
        printf("\n");

    }
    printf("\nSum of the border elements=%d",sum);

    return 0;
}
