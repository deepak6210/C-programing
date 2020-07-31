#include<stdio.h>

int main(){  
     int num;
    printf("Enter your number\n");
    scanf("%d", &num);
    if (num == 1){
        printf("Your number is one\n");
    }
    else if (num == 2)
    {
        printf("Your number is Two\n");
    }
    else if (num == 3)
    {
        printf("Your number is Three\n");
    }
    else
    {
        printf("its not one Two or Three\n");
    }
    
    return 0;

}