#include <stdio.h>

int main()
{
    float a;
    float b;
    float temp;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping value of a = %f\n", a);
    printf("After swapping value of b = %f", b);


}