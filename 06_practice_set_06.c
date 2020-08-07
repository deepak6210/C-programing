#include<stdio.h>
void TenTimes(int i);
int main(){
    int a = 2;
    printf("The value of i before passing the value through the function %d\n", a);
    TenTimes(a);
    printf("As you can see the value of var don't change after passing through the function %d\n", a);
    return 0;
}
void TenTimes(int i){
 i = i*10;
}

