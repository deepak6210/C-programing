#include<stdio.h>

int main()
{
    int x=2, y=3, z=3, k=1;
    int result = 3 * x / y - z + k;
    // it is evaluated using the precdence table 
    // 3 * x = 6
    // 6 / y = 2
    // 2 - z + k = 0 
    printf("The result of above expression %d\n", result);
    return 0;

}