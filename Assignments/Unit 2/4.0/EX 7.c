#include <stdio.h>

int main()
{
    int i, length=0;
    char string[100], character;
    printf("Enter a string: ");
    gets(string);
    for(i=0; string[i] != '\0'; i++){
        length += 1;
    }
    printf("Length of string = %i", length);
    

    return 0;
}
