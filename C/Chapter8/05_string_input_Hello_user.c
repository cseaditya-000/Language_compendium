#include <stdio.h>

int main(void)
{
    char st[100];
    printf("Enter your name: ");
    // scanf cannot be used for multiword string multi line string
    scanf("%s", st);     //st = &st[0];
    printf("Hello, %s", st);
    return 0;
}