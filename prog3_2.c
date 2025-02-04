// Program 2.4 in Programming in C 4th Edition
// by Stephen G. Lochan
// Arigthmetic Operations
// Lori Pfahler
// January 2024
#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b;
    printf("a - b = %i\n", result);

    result = b * c;
    printf("a * b = %i\n", result);

    result = a / c;
    printf("a / b = %i\n", result);

    result = a + b * c;
    printf("a  b = %i\n", result);

    printf("a * b + c * d = %i\n", a * b + c * d);
 
    return 0;

}