#include <stdio.h>

int main()
{
    char category;
    
    printf("Enter category (U/A/B/M): ");
    scanf("%c", &category);
    
    if(category == 'U')
        printf("Insurance is not available.");
    else if(category == 'A')
        printf("Insurance is double.");
    else if(category == 'B')
        printf("Insurance is normal.");
    else if(category == 'M')
        printf("Insurance is medically dependent.");
    else
        printf("Entry is invalid.");
    
    return 0;
}
