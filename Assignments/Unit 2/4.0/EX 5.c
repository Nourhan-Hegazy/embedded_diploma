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
    printf("Enter the element to be searched: ");
    scanf("%i", &element);
    
    for(i = 0; i<=n; i++){
        if(array[i] == element){
            loc = i + 1;
            printf("Number found at location: ");
            printf("%i", loc);
            break;
        }
        if(i == n){
            printf("Number not found");
        }
    }
    
    

    return 0;
}