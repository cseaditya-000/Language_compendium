#include <stdio.h>

int main(void)
{
    char str[6];
    // scanf("%s", str);

    for (int i = 0; i < 5; i++)
    {
        // scanf(" %c", &str[i]); //-one way
        scanf("%c", &str[i]);
        fflush(stdin);// -other way
    }
    str[5] = '\0';
    printf("%s", str);
    return 0;
}