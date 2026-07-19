#include <stdio.h>

int main(void)
{
    int user_arr[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the element at %d row and %d column: ", i+1, j+1);
            scanf("%d", &user_arr[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d ", user_arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}