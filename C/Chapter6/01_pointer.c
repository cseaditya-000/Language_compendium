#include <stdio.h>

// address operator& -- address of variable
// value at address* -- value stored at the address

int main()
{
    int i = 72;// just like pointer of type int we also have pointer to char, double, float etc.
    int* j = &i; // j is a pointer pointing to i.
    int k = 67;// %u is for unsigned operator 
    printf("The address of i is %u\n", &i); // &i = address of i
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k); // &i = address of i

    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&i));
    printf("The address of j is %p\n", &j);// j also has a adress

    return 0;
}