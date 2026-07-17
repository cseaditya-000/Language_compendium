#include <stdio.h>

int main()
{
    // int cgpa[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cgpa[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};// writing no of elements is not imp in this initialization method.
    for (int i = 0; i < 9; i++)
    {
        printf("The value of cgpa of index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}