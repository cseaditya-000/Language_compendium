#include <stdio.h>

int main(void)
{
    int table[3][10];
    int num[] = {2, 7, 9};
    for (int i = 0 ; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = num[i] * (j + 1);
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}