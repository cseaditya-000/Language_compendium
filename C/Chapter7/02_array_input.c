#include<stdio.h>

int main()
{
    int marks[5];
    printf("Enter the marks of students from roll 1 to 5:\n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Roll %d -> %d\n", i+1, marks[i]);
    }

    // printf("Roll 1 -> %d\nRoll 2 -> %d\n", marks[0], marks[1]);

    return 0;
}