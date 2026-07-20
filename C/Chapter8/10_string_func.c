#include <stdio.h>
#include <string.h>

int main(void)
{
    char st[] = "Aditya";
    // printf("%d", strlen(st));

    char target[30];
    strcpy(target, st);//strcpy(destination, initial point)
    printf("%s %s", st, target);
    return 0;
}