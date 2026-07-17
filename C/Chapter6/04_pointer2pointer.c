#include<stdio.h>

int main()
{
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("The value at i is %d\n",i);
    printf("The value at i is %d\n",*j);
    printf("The value at i is %d\n",*(&i)); //* and & cut each other
    printf("The value of i is %d", *(*&j));

    return 0;
}