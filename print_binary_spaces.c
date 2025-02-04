#include <stdio.h> 

void printBinaryWithPadding(int num) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // Group by 4 bits for readability
    }
    printf("\n");
}

int main() {
    int number = 9;
    printf("Binary representation of %d: ", number);
    printBinaryWithPadding(number);
    return 0;
}