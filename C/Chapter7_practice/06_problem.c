#include <stdio.h>

int num(int arr[], int n);

int main(void)
{
    int arr[] = {-1, 2, -5, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int positive = num(arr , n);
    printf("The number of positive integer is %d\n", positive);
    return 0;
}

int num(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0) count++;
    }
    return count;
}