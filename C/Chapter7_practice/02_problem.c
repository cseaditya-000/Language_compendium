#include <stdio.h>

int main(void)
{
    // printf("The answer to the question is False");
    int s[3] = {1, 2, 3};
    int *ptr = s;
    printf("The third element is %d", *(s + 3));
    return 0;
}