#include <stdio.h>

void printUnsized(int arr[], int size);//arr[]= *arr
void printPointer(int *arr, int size);
// Because C does not track how long an array is, passing the starting address tells the function where to start, and passing the size tells it when to stop. 
// Without the size, the function would blindly keep reading memory past the end of the array, leading to a crash or garbage data (a classic "buffer overflow").

int main() 
{
    int myNumbers[] = {10, 20, 30, 40, 50};
    int totalElements = sizeof(myNumbers) / sizeof(myNumbers[0]); // Calculates size (5)
    // good way to calculate size of array
    printf("Using unsized array notation: ");
    printUnsized(myNumbers, totalElements);

    printf("Using pointer notation:       ");
    printPointer(myNumbers, totalElements); //mynumber == &mynumbers[0] -- We are passing address of first element and the size of arroy altogether because withouth telling the function number of elements it wont know about it.

    return 0;
}

void printUnsized(int arr[], int size) 
{
    arr[3] = 60;
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printPointer(int *arr, int size) 
{
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Alternative pointer math syntax for arr[i]
    }
    printf("\n");
}