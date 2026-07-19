#include <stdio.h>

int main(void)
{
    char st[] = {'a','c','b','\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("%c", st[i]);
    }
    return 0;
}