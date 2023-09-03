#include <stdio.h>

int main()
{
    float operand1, operand2, result;
    char operator1;
    printf("Enter operator either + or - or * or divide: ");
    scanf("%c", &operator1);
    printf("Enter two operands: ");
    scanf("%f", &operand1);
    scanf("%f", &operand2);
        
    switch(operator1){
        case '+': result = operand1 + operand2;
        break;
        case '-': result = operand1 - operand2;
        break;
        case '*': result = operand1 * operand2;
        break;
        default: result = operand1 / operand2;
    
    }
     
    printf("%f", result);
}