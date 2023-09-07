#include <stdio.h>

int main()
{
    int i, j, rows, columns;
    float matrix[100][100], Average;
    float sum = 0.0;
    printf("Enter rows and columns of matrix: ");
    scanf("%i", &rows);
    scanf("%i", &columns);
    printf("Enter elements of matrix:\n");
    for(i = 1; i<=rows; i++){
        for(j = 1; j<=columns; j++){
            printf("Enter element a%i%i:", i,j);
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for(i = 1; i<=rows; i++){
        for(j = 1; j<=columns; j++){
            printf("%.1f\t", matrix[i][j]);
            if(j == columns){
                printf("\n");
            }
        }
    }
    printf("\nTranspose of matrix: \n");
    for(i = 1; i<=columns; i++){
        for(j = 1; j<=rows; j++){
            printf("%.1f\t", matrix[j][i]);
            if(j == rows){
                printf("\n");
            }
        }
    }
    
    

    return 0;
}
