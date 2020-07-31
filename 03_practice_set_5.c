#include <stdio.h>

int main()
{
    // 97 - 122 = a-z
    char ch;
    printf("Enter the charcter\n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("It is lower cause");
    }
    else
    {
        printf("It is upper cause");
    }

    return 0;
}