#include<stdio.h>

int main()
{
    int i ;
    int n=1;
    printf("Enter your number\n");
    scanf("%d",&i);
    while (n<11)
    {
        printf("The tabel is %d*%d=%d\n", i,n,n*i);
        n++;
    }
    
    return 0;

}