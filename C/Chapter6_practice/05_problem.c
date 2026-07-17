#include<stdio.h>

void calcu(int a, int b ,int *sum, int *average);

int main()
{
    int a = 45, b = 49;
    int sum , average;
    calcu(a , b, &sum, &average);
    printf("The sum is %d\nThe average is %d\n", sum, average);
    return 0;
}

void calcu(int a, int b, int *sum, int *average)
{
    *average = (a + b)/2;
    *sum = (a + b);
}