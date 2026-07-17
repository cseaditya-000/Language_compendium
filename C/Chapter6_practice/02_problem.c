#include <stdio.h>
#include <stdlib.h>

void address(int i)
{
    printf("The address of i is %p\n", &i);
}

int main()
{
    int i = 98654;
    printf("The address of i is %p\n", &i);
    address(i);// The addresses printed are not same because we just pass a copy or value of i to the function which it stores separately for its own use.
    return 0;
}