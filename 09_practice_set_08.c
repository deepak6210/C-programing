#include<stdio.h>
#include<string.h>

typedef struct Account
{
     int AccNumber;
     int age;
     float money;
     char name[10];    
}Acc;
void show(Acc c1){
    printf("The Accno. of c1 is :%d\n", c1.AccNumber);
    printf("The age of c1 is :%d\n", c1.age);
    printf("The money of c1 is :%f\n", c1.money);
    printf("The name of c1 is :%s\n", c1.name);

}
int main()
{
    Acc c1;
    c1.AccNumber = 756557775;
    c1.age = 45;
    c1.money = 4567.5;
    strcpy(c1.name, "Deepak");
    show(c1);
    return 0;

}