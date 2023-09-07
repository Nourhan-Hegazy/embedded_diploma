#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0;
    char string[100], reverse[100], character;
    printf("Enter a string: ");
    gets(string);
    for(i=strlen(string) -1; i>= 0; i--){
        reverse[i] = string[j];
        ++j;
    }
    printf("Reverse string is: %s", reverse);
    

    return 0;
}