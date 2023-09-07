#include <stdio.h>

int main()
{
    int i, count=0;
    char string[100], character;
    printf("Enter a string: ");
    gets(string);
    printf("Enter a character to find frequency: ");
    scanf("%c", &character);
    for(i=0; i<sizeof(string); i++){
        if(string[i] == character){
            count += 1;
        }
    }
    printf("Frequency of %c = %i", character, count);
    

    return 0;
}