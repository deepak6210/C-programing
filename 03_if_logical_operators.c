#include<stdio.h>

int main()
{
    
    int age;
    int vipPass = 0;
    vipPass = 1;
    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age <= 90 && age>=18) || !(vipPass=1))
    {
        printf("you are above 18 and below 17, you can drive");
    }
    else
    {
        printf("you can drive");
    }

    return 0;

}