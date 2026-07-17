#include <stdio.h>
#include <stdlib.h>

void ten_times(int *num)
{
    *num = 10 * (*num);
}

int main()
{
    int num = 7;
    printf("The address of num is %p and the value of num is %d\n", &num, num);
    ten_times(&num);
    printf("The new num value is %d\n", num);
    printf("The Address of num is %p\n",&num);// this time the address of num remains same.
    return 0;
}