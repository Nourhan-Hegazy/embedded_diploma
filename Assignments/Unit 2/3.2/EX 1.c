#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer you want to check: ");
    scanf("%i", &number);
    if(number %2 == 0){
        printf("%i is even");
    }
    else{
        printf("%i is odd");
    }

}