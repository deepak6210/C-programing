#include <stdio.h>
//  sum is an function which take a and b as an input and returns an integer as an output
int sum(int a, int b); // Function prototype declaration

int main()
{
    int c;

    c = sum(3, 5); // Function call
    printf("The value of c is %d\n", c);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}