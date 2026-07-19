#include <stdio.h>

int main(void)
{
    int arr_3d[2][3][4];
    for (int i = 0; i < 2 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The address of arr_3d[%d][%d][%d] is %p.\n", i, j, k, &arr_3d[i][j][k]);
            }
        }
    }
    return 0;
}