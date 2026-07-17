#include <stdio.h>

int main()
{
    float a = 7.8;
    float *pta = &a;
    printf("The value of pta is %u\n", pta);

    pta++;
    printf("The value of pta is %u\n", pta);


    return 0;
}