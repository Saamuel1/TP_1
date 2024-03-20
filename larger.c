#include <stdio.h>

int main() {
    // Declare variables
    int a, b;

    // Input values
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Compare the values
    if (a > b) {
        printf("%d is larger than %d\n", a, b);
    } else if (b > a) {
        printf("%d is larger than %d\n", b, a);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
