#include <stdio.h>

int my_strlen(char arr[]);//for string, no nedd to pass the length because it terminates using \0

int main(void)
{
    char st[] = "Hello";
    printf("%d", my_strlen(st));
    return 0;
}

int my_strlen(char arr[])
{
    int i = 0;
    while (arr[i] != 0)
    {
        i++;
    }
    return i;
}