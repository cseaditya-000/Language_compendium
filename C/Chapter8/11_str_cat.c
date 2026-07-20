#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[12] = "hello"; 
    char s2[] = " harry"; 
    strcat(s1,s2); // s1 now contains "helloharry" <no space in between>
    printf("%s \n%s", s1, s2);
    return 0;
}