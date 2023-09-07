#include <stdio.h>

int main()
{
    int i, n;
    float matrix[100], Average;
    float sum = 0.0;
    printf("Enter the number of data: ");
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        printf("Enter number: ");
        scanf("%f", &matrix[i]);
    }
    
    for(i = 0; i<n; i++){
        sum += matrix[i];
    }
    Average = sum/n;
    printf("Average = %f", Average);
    
    
    

    return 0;
}