#include <stdio.h>
#include <stdlib.h>

int sum(int ,int);

int sum(int a, int b)
{
    a = 6;
    return a+b;
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n",sum(x, y));// we are only providing copy of x and y and not the variavble itself
    printf("the value of x is %d\n", x);
    return 0;
}