#include <stdio.h>

int main()
{
    int leap_year;
    float leap1;
    printf("Enter the leap year\n");
    scanf("%d", &leap_year);
    leap1 = leap_year % 4;
    if (leap1 == 0 )
    {
        printf(" %d  is a leap year\n", leap_year);
    }
    else
    {
        printf("It is not a leap year");
    }

    return 0;
}