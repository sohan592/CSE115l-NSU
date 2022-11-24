#include <stdio.h>
int main()
{
    int row, col; /// 4, 3
    printf("Enter row no and col no: ");
    scanf("%d %d", &row, &col);

    int array[row][col];

    for(int i=0; i<row; i++){ /// rows
        for(int j=0; j<col; j++){ /// cols
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    /// print the elements of the 2d array / matrix
    printf("\nMatrix: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    int newRow = col, newCol = row;
    int arrayT[newRow][newCol];

    for(int i=0; i<newRow; i++){
        for(int j=0; j<newCol; j++){
            arrayT[i][j] = array[j][i];
        }
    }

    printf("\nTransposed Matrix: \n");
    for(int i=0; i<newRow; i++){
        for(int j=0; j<newCol; j++){
            printf("%d\t", arrayT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
