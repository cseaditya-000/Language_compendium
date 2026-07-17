#include <stdio.h>
#include <stdlib.h>

int change()

int main()
{
    int a = 8;
    int* j = &a;

    printf("The value of a is %d\n",a);
    printf("The hexadecimal address of a is %p\n", &a);
    printf("The decimal address of a is %u\n",&a);
    printf("The value of j is %u",j);
    return 0;
}

//Format Specifiers for pointer
//In C, both %p and %u can be used to print values but they treat data very differently especially when it comes to memory adresses(pointers).
// %p is specifically designed to print memory addresses in hexadecimal format while %u prints an unsigned integer in decimal format.
//Using %u for an address is technically incorrect  and cna lead to data loss or bugs. Here is why exactly they differ:
//1. Data Type expectation
/*
%p expects a pointer (void*): it is designed to match architechture pointer size(32 bit or 64 bit).
%u expects an unsigned int : it expects a 32 bit integer on most modern system.
*/
/*
Signed int: Uses the very first bit(the most significant bit) as a "Sign post". If that bit is 0,The number is positive. If it is 1, the number negative. Because one bit is used for the sign, you have fewer bits left to represent the actual size of the number. Range--> -2147483648-+2147483648
Unsigned int: An unsigned int is a whole number(an int) that can not be negative. it can only represent zero and positive number range--> 0 - 4294967296
*/