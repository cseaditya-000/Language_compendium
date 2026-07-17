#include <stdio.h>
#include <stdlib.h>

void change(int a)
{
    a = a*10;
}

int main()
{
    int a = 7;
    change(a);
    printf("The value of a is %d", a);
    return 0;
}