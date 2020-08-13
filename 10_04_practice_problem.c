#include<stdio.h>

int main()
{
    int a,b,c;
    FILE *ptr;
    ptr = fopen("ptr1.txt", "r");
    fscanf(ptr, "%d ", &a);
    printf("The value of a is %d before doubling\n", a);
    fclose(ptr);
    ptr = fopen("ptr1.txt", "w");
        fprintf(ptr, "%d \n", a*2);
    fclose(ptr);
    printf(" Succesfully doubled the integer in the file ");
    return 0;

}