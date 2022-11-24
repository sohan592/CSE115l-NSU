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
    printf("Values in array A:\n");
     int sum=0;
    for(i=0;i<rows;i++)
    {   
        for(j=0;j<columns;j++)
        {
             if(A[i][j] % 2==0){
             sum+=A[i][j];
        }

        }

    }
    printf("%d",sum);

    return 0;
}
