#include <stdio.h>

int main(void)
{
    int table[3][10];
    for (int i = 0 ;i < 10; i++)
    {
      table[0][i] = 2*(i+1);
      printf("%d ", table[0][i]);
    }
    printf("\n");
    for (int i = 0 ;i < 10; i++)
    {
      table[1][i] = 7*(i+1);
      printf("%d ", table[1][i]);
    }
    printf("\n");
    for (int i = 0 ;i < 10; i++)
    {
      table[2][i] = 9*(i+1);
      printf("%d ", table[2][i]);
    }

    return 0;
}