// Program 3.1 in Programming in C 4th Edition
// by Stephen G. Lochan
// Datatypes
// Lori Pfahler
// January 2024
#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("Integer Variable: %i\n", integerVar);
    printf("Floating Variable: %f\n", floatingVar);
    printf("Double Variable: %e\n", doubleVar);
    printf("Double Variable: %g\n", doubleVar);
    printf("Char Variable: %c\n", charVar);
    printf("Boolean Variable: %i\n", boolVar);

    return 0; 
}