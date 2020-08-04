#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n = 10;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of first 10 natural number is %d", sum);
    return 0;
}