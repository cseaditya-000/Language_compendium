#include <stdio.h>

int sum(int* a,int* b);
//sum should change the value of a

int main()
{
    int x = 2, y =7;
    printf("The sum of a and b is %d\n", sum(&x, &y));
    printf("The value of a is %d", x);
    return 0;
}

int sum(int *a, int *b)//to change the value of variable through a funtion, we should pass on the address of variable rather than value of variable
{
    *a = 9;
    return *a + *b;
}