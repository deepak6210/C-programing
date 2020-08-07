#include<stdio.h>

int main()
{
    int i =34;
    int *ptr = &i;
    char c = 34;
    char *ptrs = &c;
    printf("The address of i is %u\n", ptr);
    ptr++;
    printf("The address of i is %u\n", ptr);
    ptr--;
    printf("The address of i is %u\n", ptr);
    printf("The address of i is %u\n", ptrs);
    ptrs++;
    printf("The address of i is %u\n", ptrs);
    ptrs--;
    printf("The address of i is %u\n", ptrs);
    return 0;

}