#include <stdio.h>

int main()
{
    //A string is a 1-D character array terminated by a null character (‘\0’) 
    //A null character is used to denote the termination of a string. Characters are stored in contiguous memory locations. 
    char st[] = {'a','b','c','d','\0'};
    printf("First Character is %c\n", st[0]);
    return 0;
}