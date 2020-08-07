#include<stdio.h>

int main()
{
    //  for the addition of number in the pointers.
    int a = 34;
    int *ptra = &a;
    printf("The address of a is %u\n",ptra);
    ptra = ptra+1;
    printf("The address of a is %u\n",ptra);
    //  Subtraction of a number from a pointer 
     int s = 34;
    int *ptrs = &s;
    printf("The address of s is %u\n",ptrs);
    ptrs = ptrs-1;
    printf("The address of s is %u\n",ptrs);
    return 0;
    //  subtraction of one pointer from another 
    printf("The subtraction of a And i is %d\n", ptra-ptrs);
    // Comparison of two variable
    if (ptrs==ptra){
        printf("The address of ptrs is %u:-\n The address of ptra is :-%u\n", ptrs, ptra);
    }
    else
    {
        printf("The address of ptrs is %u:-\n The address of ptra is :-%u\n", ptrs, ptra);
        printf("The address didn't match ");
    }
    
}