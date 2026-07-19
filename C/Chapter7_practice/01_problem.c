#include <stdio.h>

int main(void)
{
    float arr[] = {0.1 ,0.3 ,0.5, 0.7, 0.9, 1.1, 1.3, 1.5, 1.7, 1.9};
    float *ptr = arr;
    printf("The value of third element is %f", *(ptr + 2));
    return 0;
}