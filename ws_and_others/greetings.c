#include <stdio.h>
#include <stdlib.h>

// constants
#define MAX_NAME_LENGTH 100

int main()
{
    char name[MAX_NAME_LENGTH];

    printf("Please enter your first name : ");
    scanf("%s", name);
    printf("\nHello, %s, welcome to APSC 160!\n\n", name);
    
    
    return 0;
}


