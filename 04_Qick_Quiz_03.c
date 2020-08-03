#include<stdio.h>

int main()

{
    int n; 
    printf("Enter Your number");
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        printf("The value of a is %d\n", a);
    }
    
    return 0;

}