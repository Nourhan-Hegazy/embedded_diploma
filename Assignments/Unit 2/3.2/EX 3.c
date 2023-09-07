#include <stdio.h>

int main()
{
    float num1, num2, num3, largest;
    printf("Enter three numbers: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    
    if(num1 > num2){
        if(num1 > num3){
            largest = num1;
        }
        else{
            if(num3 > num2)
                largest = num3;
            else{
                largest = num1;
            }
        }
    }
    else{
        if(num2 > num3){
            largest = num2;
        }
        else{
            largest = num3;
        }
    }
    printf("Largest number = %f", largest);

}