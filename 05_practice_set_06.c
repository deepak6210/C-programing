#include<stdio.h>
int sum(int n);
int main()
{  int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    printf("The sum of the first %d natural number are = %d" , n,sum(n));
    return 0;

}
int sum(int n){
    if (n != 0)
    {
        return (n + sum(n-1));
    }
    else
    {
        return n;
    }
    
    
}