#include <stdio.h>

int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);
    alphabet = tolower(alphabet);
    if(strchr(vowels, alphabet) != NULL){
        printf("%c is a vowel");
    }
    else{
        printf("%c is a consonant");
    }

}