#include <stdio.h>
#include <string.h>

// Function to convert a single hexadecimal digit to its 4-bit binary representation
void hexToBinary(char hexDigit, char *binary) {
    switch (hexDigit) {
        case '0': strcpy(binary, "0000"); break;
        case '1': strcpy(binary, "0001"); break;
        case '2': strcpy(binary, "0010"); break;
        case '3': strcpy(binary, "0011"); break;
        case '4': strcpy(binary, "0100"); break;
        case '5': strcpy(binary, "0101"); break;
        case '6': strcpy(binary, "0110"); break;
        case '7': strcpy(binary, "0111"); break;
        case '8': strcpy(binary, "1000"); break;
        case '9': strcpy(binary, "1001"); break;
        case 'A': case 'a': strcpy(binary, "1010"); break;
        case 'B': case 'b': strcpy(binary, "1011"); break;
        case 'C': case 'c': strcpy(binary, "1100"); break;
        case 'D': case 'd': strcpy(binary, "1101"); break;
        case 'E': case 'e': strcpy(binary, "1110"); break;
        case 'F': case 'f': strcpy(binary, "1111"); break;
        default: strcpy(binary, "Invalid"); break;
    }
}

int main() {
    char hex[100];
    char binary[400] = ""; // To store the final binary result
    int i;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    for (i = 0; hex[i] != '\0'; i++) {
        char binaryDigit[5]; // Temporary storage for each 4-bit binary
        hexToBinary(hex[i], binaryDigit);
        strcat(binary, binaryDigit);
    }

    printf("Binary equivalent: %s\n", binary);
    return 0;
}
