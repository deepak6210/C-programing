#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your percentage\n");
    scanf("%d", &grade);
    switch (grade / 10)
    {
    case 10:
    case 9:
        printf("Your grade is A\n");

        break;
    case 8:

        printf("Your grade is B\n");

        break;
    case 7:

        printf("Your grade is C\n");

        break;
    case 6:

        printf("Your grade is D\n");

        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
        printf("Your grade is F\n");

        break;
    default:
        printf("don't provide default grade\n");
        break;
    }
    return 0;
}