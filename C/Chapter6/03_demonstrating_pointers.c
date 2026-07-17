#include<stdio.h>

int main()
{
    int i = 8;
    int *j = &i;// int stores 4 bits
    printf("address i = %u\n",&i);
    printf("adreess i = %u\n",j);
    printf("address j = %u\n",&j);
    printf("value i = %d\n",i);
    printf("value i = %d\n",*(&i));
    printf("value i = %d\n",*j);
    return 0;
}