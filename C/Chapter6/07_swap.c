#include<stdio.h>

void swap(int *x, int *y);

int main()
{
    int x = 2 , y = 3;
    swap(&x, &y);
    printf("After Swap, The value of x is %d and the value of y is %d\n", x, y);
    return 0;
}

void swap(int *x, int *y)
{
    int a = *y;
    *y = *x;
    *x = a;
}