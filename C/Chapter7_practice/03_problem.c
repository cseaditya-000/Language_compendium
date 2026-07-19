#include <stdio.h>

int main(void)
{
    int num = 5;
    int table[10];

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", table[i]);
    }
    return 0;
}