#include <stdio.h>

int main(void)
{
    //scanf("%d %d %d" &n1, &n2, &n3)
    int count; 
    printf("Enter the number of numbers you eant table of: "); 
    scanf("%d",&count);
    int num[count];
    for (int i = 0 ; i < count ; i++)
    {
        printf("Enter number%d: ", i+1); 
        scanf("%d", &num[i]);
    }
    int table[count][10];
    for (int i = 0; i < count ; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = num[i] * (j+1);
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}