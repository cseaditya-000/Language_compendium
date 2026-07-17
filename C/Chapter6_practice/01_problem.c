#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 8;
    printf("The address of a is %p\n", &a);
    int *b = &a;
    printf("The value at address b is %d", *b);
    return 0;
}