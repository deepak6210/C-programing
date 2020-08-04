#include <stdio.h>
float coverter(int celsius);

int main()
{
    int celsius;
    printf("Enter the value of fahranheit you want ot covert\n");
    scanf("%d", &celsius);
    printf("The Tempratue in celsius is %f\n", coverter(celsius));
    return 0;
}
float coverter(int celsius)
{
    float temp;
    temp = (celsius * 9 / 5) + 32;
    return temp;
}