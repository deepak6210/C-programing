#include <stdio.h>

// Write a program to find greatest of 4 number entered by the user.
int main()
{
    int num1, num2, num3, num4;
    printf("Enter 1st number\n");
    scanf("%d", &num1);
    printf("Enter 2st number\n");
    scanf("%d", &num2);
    printf("Enter 3st number\n");
    scanf("%d", &num3);
    printf("Enter 4st number\n");
    scanf("%d", &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("The %d  is greatest which is 1st number\n", num1);
    }
    else if (num2 > num3 && num2 > num4 && num2 > num4)
    {
        printf("The %d is greatest which is 2nd number \n", num2);
    }
    else if (num3 > num2 && num3 > num4 && num3 > num4)
    {
        printf("The %d is greatest which is 3rd number\n", num3);
    }
    else if (num4 > num3 && num4 > num1 && num4 > num3)
    {
        printf("The %d is greatest which is 4th number\n", num4);
    }

    return 0;
}