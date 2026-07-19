#include <stdio.h>

void reverse(char arr[], int n);

int main(void)
{
    char actual[] = {'y', 'a', 's'};
    printf("Before Reversal: ");
    for (int i = 0; i < 3 ; i++)
    {
        printf("%c", actual[i]);
    }
    printf("\n");
    reverse(actual , 3);
    printf("After reversal: ");
    for (int i = 0; i < 3 ; i++)
    {
        printf("%c", actual[i]);
    }
    return 0;
}

void reverse(char arr[], int n)
{
    char arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr2[(n-1) - i];
    }
}