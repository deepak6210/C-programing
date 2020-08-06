#include<stdio.h>

int main()
{
    int i = 34;
    int*j = &i; // j will know store the adress of i 
    printf("The value o fi is %d\n", i);
    printf("The value o fi is %d\n", i);
    printf("The Address of i is %u\n", &i);
    printf("The Address of i is %u\n", j);
    printf("The Address of j is %u\n", &j);
    printf("The Value of j is %u\n", *(&j));
    
    return 0;

}