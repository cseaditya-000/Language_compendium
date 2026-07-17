#include<stdio.h>

// memory blocks are contiguous.

int main()
{
    char k = 'C';
    char* k_address = &k;//Yes, char * is a distinct data type in C specifically used to store memory addresses.
    printf("The address of k is %p", k_address);
    return 0;
}