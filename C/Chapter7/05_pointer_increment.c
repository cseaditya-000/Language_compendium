#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;

    printf("The address of a is %u\n", ptr);
    // printf("The address of a is %u", &a);
    ptr++;// by how much it will be incremented depends on data ttype and memory it takes in the given architechture
    printf("The value of ptr is %u\n", ptr);
    return 0;
}