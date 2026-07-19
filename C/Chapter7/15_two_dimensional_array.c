#include <stdio.h>

//A 2D array in C is actually just a 1D array where every element is itself another 1D array (an array of arrays).

int main(void)
{
            // row column  
    int int_arr[3][2]={{1,4},
                       {7,9},
                       {11,22}};
    printf("The value of element at 2nd row and first coulmn is %d\n", int_arr[1][0]);
    return 0;
}