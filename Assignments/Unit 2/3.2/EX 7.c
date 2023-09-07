#include <stdio.h>

int main()
{
    int number, i;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%i", &number);
    
        
     if(number > 0){
        for(i = 0; i<number; i++){
            factorial = factorial * (1+i);
         }
        printf("Factorial = %i", factorial);
        }
     else{
        if(number == 0){
            factorial = 1;
            printf("Factorial = %i", factorial);
        }
        else{
             printf("Erorr!!! factorial of negative number doesn't exist");
        }
     }
     

}