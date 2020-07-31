#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age > 90)
    {
        printf("you are above 90 you can't drive");
    }
     if (age < 18)
    {
        printf("you are below 18 you can't drive");
    }
    else
    {
        printf("you can drive");
    }

    return 0;
}