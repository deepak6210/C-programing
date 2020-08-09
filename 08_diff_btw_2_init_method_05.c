#include<stdio.h>

int main()
{
    // char ptr[] = "Deepak Python";
    // ptr = "Randeep jangra";   // it will not run you got error 
    char *ptr = "Deepak Python";  // this will run because we provide the address to the compiler. 
    ptr = "Randeep jangra";
    printf("%s", ptr);
    return 0;

}