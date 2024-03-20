#include <stdio.h>
#include "sum.h"

int main() 
{
    // Declare variables
    int a, b, summ;

    // Input values
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Call the function and print the result
    summ = sum(a, b);
    printf("%d + %d = %d\n", a, b, summ);

    return 0;
}
