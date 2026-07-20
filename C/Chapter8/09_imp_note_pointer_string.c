#include <stdio.h>

int main(void)
{
    // char st[] = "Aditya";
    // st[1] = "Hello"; // cannot be reinitialized
    char *ptr = "Hello";
    printf("%s\n", ptr);
    ptr = "Hi";// can be reinitialized when using pointer
    printf("%s\n", ptr);//when printing we pass the address of first charcter of the string
    return 0;
}