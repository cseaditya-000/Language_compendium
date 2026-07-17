#include<stdio.h>

int main()
{
    int marks[90] ;// reserve space rto store 90 integers

    marks[0] = 45;// starts counting from 0 just like python
    marks[1] = 90;
    // marks[-1] = 89; // not supporting negative counting like python
    //we can go all the way till 89.

    printf("The value of marks 0 and marks 1 is %d and %d\n", marks[0] , marks[1]);
    // printf("The value of marks 89 is %d\n", marks[89]);
    return 0;
}