#include <stdio.h>

int main(void)
{
    char st[] = "Aditya";
    for (int i = 0; st[i] != '\0'; i++)
    {
        printf("%c",st[i]);
    }
    return 0;
}