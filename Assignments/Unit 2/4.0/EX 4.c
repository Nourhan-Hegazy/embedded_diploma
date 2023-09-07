#include <stdio.h>

int main()
{
    int i, n, element, loc;
    int array[100];
    printf("Enter no. of elements: ");
    scanf("%i", &n);
    for(i=0; i<n; i++){
        scanf("%i", &array[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%i", &element);
    printf("Enter the location: ");
    scanf("%i", &loc);
    
    for(i = n - 1; i>=loc - 1; i--){
        array[i + 1] = array[i]; 
    }
    array[loc -1] = element;
   
    for(i=0; i<n+1; i++){
        printf("%i", array[i]);
    } 
    

    return 0;
}
