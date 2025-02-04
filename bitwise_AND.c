// Program 2.4 in Programming in C 4th Edition
// by Stephen G. Lochan
// bitwise AND "&" operator
// Lori Pfahler
// January 2024

#include <stdio.h>

int main(void)
{
    // word1 (25 in decimal), word2 (77) and word3 (9) in octal format 
    // indicated by leading zero
    unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;
    // see results of bitwise AND = &

    //              077  = 000 111 111
    //              0150 = 001 101 000
    // result of &  050  = 000 101 000
    unsigned int word1_2 = word1 & word2;
    printf ("Octal: %o, Decimal: %i\n", word1_2, word1_2);

    //              077  = 000 111 111
    //              077  = 000 111 111
    // result of &  077  = 000 111 111
    // any number ANDED with itself give itself back
    unsigned int word1_1 = word1 & word1;
    printf ("Octal: %o, Decimal: %i\n", word1_1, word1_1);

    // order does not matter here but C will proceed left to right
    //              077  = 000 111 111
    //              0150 = 001 101 000
    // result of &  050  = 000 101 000
    //              0210 = 010 001 000
    // result of &  010  = 000 001 000
    unsigned int word1_2_3 = word1 & word2 & word3;
    printf ("Octal: %o, Decimal: %i\n", word1_2_3, word1_2_3);

    //              077  = 000 111 111
    //              01   = 000 000 001
    // result of &  00   = 000 000 000
    // give the last digit in binary - can be used to determine even vs odd
    // word1 = 25 in decimal; it is odd - give a "1"; even will give a "0"
    unsigned int word1__1 = word1 & 1;
    printf ("Octal: %o, Decimal: %i\n", word1__1, word1__1);

    //              077  = 000 111 111
    //              02   = 000 000 010
    // result of &  02   = 000 000 010
    // give the 2nd digit in binary by ANDing with 2 = 0010
    unsigned int word1__2 = word1 & 2;
    printf ("Octal: %o, Decimal: %i\n", word1__2, word1__2);

    //              077  = 000 111 111
    //              04   = 000 000 100
    // result of &  04   = 000 000 100
    // give the 3rd digit in binary by ANDing with 4 = 0100
    unsigned int word1__4 = word1 & 4;
    printf ("Octal: %o, Decimal: %i\n", word1__4, word1__4);

    //              077  = 000 111 111
    //              010  = 000 001 000
    // result of &  010  = 000 001 000
    // give the 4th digit in binary by ANDing with 8(decimal) = 0100
    unsigned int word1__8 = word1 & 8;
    printf ("Octal: %o, Decimal: %i\n", word1__8, word1__8);

    return 0;
}