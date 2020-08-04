#include <stdio.h>

int main()
{
    int n = 45, i = 2, prime;
    // printf("Enter your number");
    // scanf("%d", &n);
    while (n > i)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
        else
        {
            i++;
        }
        
    }
    if (prime ==1)
    {
       printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    
    return 0;
}