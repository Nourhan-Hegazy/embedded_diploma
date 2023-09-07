#include <stdio.h>

int main()
{
    float matrix1[2][2], matrix2[2][2], sumMatrix[2][2];
    int i, j;
    printf("Enter the elements of 1st matrix\n");
    for(i = 1; i<=2; i++){
        for(j = 1; j<=2; j++){
            printf("Enter a%d%d: ", i, j);
            scanf("%f", &matrix1[i][j]);
        }
    }
    
    printf("Enter the elements of 2nd matrix\n");
    for(i = 1; i<=2; i++){
        for(j = 1; j<=2; j++){
            printf("Enter b%d%d: ",i, j);
            scanf("%f", &matrix2[i][j]);
        }
    }
    for(i = 1; i<=2; i++){
        for(j= 1; j<=2; j++){
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("Sum of Matrix: \n");
    for(i = 1; i<=2; i++){
        for(j = 1; j<=2; j++){
            printf("%.1f\t", sumMatrix[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }

    
    

    return 0;
}