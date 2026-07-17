#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50 };
    int distance = &arr[4] - &arr[1];
    printf("distance is %d\n", distance);
    return 0;
}