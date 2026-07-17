#include<stdio.h>

void value(int *num)
{
    *num = 23;// pass by ref
}

int main()
{
    int num;
    value(&num);
    printf("The address of num is %p\n", &num);
    printf("The value of num is %d\n", num);
}