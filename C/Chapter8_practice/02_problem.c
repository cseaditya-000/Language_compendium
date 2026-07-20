#include <stdio.h>

int main(void)
{
    char s1[12];
    printf("Enter: ");
    scanf("%s", s1);

    char s2[12];
    for (int i = 0; i < 3; i++)
    {
        // printf("Enter char%d:", i+1);
        scanf("%c", &s2[i]);
        fflush(stdin);
    }
    s2[12]='\0';
    int i = 0;
    while (s1[i] == s2[i] || s1[i] != '\0')
    {
        i++;
    }
    if (i == 9)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    // printf("%s\n",s1);
    // printf("%s",s2);
    return 0;
}