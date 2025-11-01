#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Reverse a string in-place

void reverseString(char* str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}


// Decimal → Binary

char* decimalToBinary(int decimal) {
    char* binary = (char*)malloc(33);
    int i = 0;
    if (decimal == 0) {
        strcpy(binary, "0");
        return binary;
    }
    while (decimal > 0) {
        binary[i++] = '0' + (decimal & 1);
        decimal >>= 1;
    }
    binary[i] = '\0';
    reverseString(binary);
    return binary;
}


// Binary → Decimal

int binaryToDecimal(char binary[]) {
    int decimal = 0;
    for (int i = 0; binary[i] != '\0'; i++)
        decimal = decimal * 2 + (binary[i] - '0');
    return decimal;
}


// Decimal → Octal

char* decimalToOctal(int decimal) {
    char* octal = (char*)malloc(12);
    sprintf(octal, "%o", decimal);
    return octal;
}


// Octal → Decimal

int octalToDecimal(char octal[]) {
    int decimal = 0;
    for (int i = 0; octal[i] != '\0'; i++)
        decimal = decimal * 8 + (octal[i] - '0');
    return decimal;
}


// Hexadecimal → Binary

char* hexadecimalToBinary(char hex[]) {
    unsigned int num;
    sscanf(hex, "%x", &num);
    char* binary = decimalToBinary(num);
    return binary;
}


// Binary → Hexadecimal

char* binaryToHexadecimal(char binary[]) {
    int decimal = binaryToDecimal(binary);
    char* hex = (char*)malloc(33);
    sprintf(hex, "%X", decimal);
    return hex;
}

// Main Program
int main() {
    int choice, num;
    char input[100];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Decimal to Binary\n");
        printf("2. Binary to Decimal\n");
        printf("3. Decimal to Octal\n");
        printf("4. Octal to Decimal\n");
        printf("5. Hexadecimal to Binary\n");
        printf("6. Binary to Hexadecimal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Goodbye!\n");
            break;
        }

        switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            char* binResult = decimalToBinary(num);
            printf("Decimal to Binary: %s\n", binResult);
            free(binResult);
            break;

        case 2:
            printf("Enter a binary number: ");
            scanf("%s", input);
            printf("Binary to Decimal: %d\n", binaryToDecimal(input));
            break;

        case 3:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            char* octResult = decimalToOctal(num);
            printf("Decimal to Octal: %s\n", octResult);
            free(octResult);
            break;

        case 4:
            printf("Enter an octal number: ");
            scanf("%s", input);
            printf("Octal to Decimal: %d\n", octalToDecimal(input));
            break;

        case 5:
            printf("Enter a hexadecimal number: ");
            scanf("%s", input);
            char* hexBin = hexadecimalToBinary(input);
            printf("Hexadecimal to Binary: %s\n", hexBin);
            free(hexBin);
            break;

        case 6:
            printf("Enter a binary number: ");
            scanf("%s", input);
            char* hexResult = binaryToHexadecimal(input);
            printf("Binary to Hexadecimal: %s\n", hexResult);
            free(hexResult);
            break;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}