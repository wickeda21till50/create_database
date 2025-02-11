#include <stdio.h>

int main() {
    double number, result;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Multiply the number by 2
    result = number * 2;

    // Display the result
    printf("The result of multiplying %lf by 2 is %lf\n", number, result);

    return 0;
}
