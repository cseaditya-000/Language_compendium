#include <stdio.h>

// pointer arithmetic
// addition of a number
// subtraction of a number
// subtraction of one pointer from another
// comparison of two pointer variable

int main()
{
    // int f = 678;
    // int *g = &f;

    // int h = 345;
    // int *k = &h;
    // printf("The value of g is %u.\n ", g);
    // printf("The value of k is %u.\n ", k);

//     int *i = k - g;
//     The Rulebook for Pointer Subtraction
// To make pointer subtraction safe and meaningful, always follow these rules:

// Same Array: Both pointers must point into the same array.

// The Result is a Count, Not an Address: The result is the number of elements between them, not a new memory address.

// Use %td or %ld to Print: Because the result is a distance (an integer), you print it like a regular number, not a pointer.

    // printf("The value of is %u.\n ", i);
    //g = g-2
    // g = g + 2;//The value of g is 6422296.The value of g is 6422304.
    // printf("The value of g is %u. ", g);

    int marks[3] = {3, 4, 5};

    int *address1 = &marks[1];
    int *address0 = &marks[0];

    printf("%ld", address1 - address0);

    return 0;
}