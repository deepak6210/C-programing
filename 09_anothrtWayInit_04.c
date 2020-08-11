#include<stdio.h>
#include<string.h>
struct employee
{
  int code;
  float salary;
  char name[10];  
};
int main()
{
    struct  employee Deepak = {100 , 99.5, "Deepak"};
    printf("Name is: %d \n", Deepak.code);
    printf("Name is: %f \n", Deepak.salary);
    printf("Name is: %s \n", Deepak.name);
    return 0;

}