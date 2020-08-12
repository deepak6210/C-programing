#include<stdio.h>

int main()
{
    int a,b,c;
    FILE *ptr;
    ptr = fopen("ptr1.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b , &c );
    printf("The value of a b and c id %d %d %d\n", a, b, c);
    
    return 0;

}