#include <stdio.h>

int main()
{
    int i = 56;
    int *i_ptr = &i;
    printf("The value of i_ptr is %u\n", i_ptr);
    // i_ptr++;//moved the address next block. moved me to next house on the address.
    // printf("The value of ptr is %u\n", i_ptr);

    int j = 987;
    int *j_ptr = &j;
    j_ptr++;
    printf("The value of j_ptr is %u\n", j_ptr);
    // j_ptr --;// move me to the previous house on the street.
    // printf("The value of j_ptr is %u\n", j_ptr);

    // printf("The diff of value of j_pr and i_ptr is %u\n", j_ptr - i_ptr);
    // the subtraction for pointer is only for elements in a  array
    
    // if (j_ptr > i_ptr)
    // {
    //     printf("j_ptr is greater than i_ptr");
    // }
    // else if (j_ptr == i_ptr)
    // {
    //     printf("i_ptr is equal to j_ptr");
    // }
    // else
    // {
    //     printf("i_ptr is greater than j_ptr");
    // }
    return 0;
}