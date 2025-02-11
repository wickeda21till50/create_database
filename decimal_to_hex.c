#include <stdio.h>

void decimalToHexadecimal(int decimal) {
    char hexadecimal[20];
    int index = 0;

    while (decimal != 0) {
        int temp = decimal % 16;

        if (temp < 10) {
            hexadecimal[index] = temp + 48;
        } else {
            hexadecimal[index] = temp + 55;
        }

        index++;
        decimal = decimal / 16;
    }

    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToHexadecimal(decimal);

    return 0;
}
