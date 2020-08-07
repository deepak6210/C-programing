#include<stdio.h>
void printAdd(int a){
    printf("The address of variable a is %u\n", &a);
}
int main()
{
    int i = 4; 
    printf("The value of variable i is %d\n", i);
    printAdd(i);
    printf("The address of variable i is %u\n", &i);
    return 0;

}
/*in output we got an diffrent address of the  main function and 
printAdd function beacuse while passing a value through a function 
we pass the copy of the value through the function.*/