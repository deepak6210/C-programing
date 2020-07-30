# include <stdio.h>
# include<math.h>

int main()
{
    int a = 4;
    int b = 8;
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    int z;
    z = b * a; // this is legal
    // b * a = z ; // this is inlegal the compiler through error when you uncomment and run this
    printf("The value of z is: %d\n", z);

    printf("5 when didvided by 2 leaves a reminder of %d\n", 5 % 2);
    printf("-5 when didvided by 2 leaves a reminder of %d\n", -5 % 2);
    printf("5 when didvided by -2 leaves a reminder of %d\n", 5 % -2); // here we get 1 because the sign of reminder is always equal to the numerator

    //  To find the power of some number 
    printf("The power of 5 in term of 6  %f\n", pow(5, 6)); 
    return 0;
}