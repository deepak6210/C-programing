#include<stdio.h>
void display(); // Function prototype 
int main()
{
    printf("Initializing display function\n");
    display(); // function call
    printf("Dipplay function finished it work\n");
    return 0;

}
// function definition 
void display(){
    printf("This is display\n");
}