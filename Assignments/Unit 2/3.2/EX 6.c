#include <stdio.h>

int main()
{
    int number, i;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%i", &number);
    
    if(number > 0){
        for(i = 0; i<number; i++){
            sum = sum + (1+i);
        }
        printf("Sum = %i", sum);
    }
    


}