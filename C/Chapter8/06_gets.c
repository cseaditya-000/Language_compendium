#include <stdio.h>

int main(void)
{
    char sent[100];
    printf("Enter a sentence to get 100 copies:\n");
    gets(sent);
    for (int i = 0 ; i < 100; i++)
    {
        printf("%s\n", sent);
    }
    return 0;
}