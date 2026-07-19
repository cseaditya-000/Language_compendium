#include <stdio.h>

void reverse(char arr[], int n);

int main(void)
{
    int n = 4;
    char actual[] = {'y', 'a', 's', 't'};
    printf("Before Reversal: ");
    for (int i = 0; i < n ; i++)
    {
        printf("%c", actual[i]);
    }
    printf("\n");
    reverse(actual , n);
    printf("After reversal: ");
    for (int i = 0; i < n ; i++)
    {
        printf("%c", actual[i]);
    }
    return 0;
}

void reverse(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    
    // Keep swapping until the two indices meet in the middle
    while (start < end) 
    {
        // Classic temporary variable swap trick
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move the markers closer together
        start++;
        end--;
    }
}
