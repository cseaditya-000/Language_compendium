#include<stdio.h>

int main()
{
    char p = 'q';
    char *p_ptr = &p;
    printf("The value of p_ptr is %u\n", p_ptr);

    p_ptr++;//char pointer incremnt by 1
    printf("The value of p_ptr is %u\n", p_ptr);
    return 0;
}