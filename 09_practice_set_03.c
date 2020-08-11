#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int rollno;
    float marks;
    char name[10];
}st;
void show(st s1)
{
   printf("The rollnumber of Student is :%d\n", s1.rollno);    
   printf("The marks of Student is :%f\n", s1.marks);    
   printf("The name of Student is :%s\n", s1.name);    
}
int main()
{
    st s1;
    st *ptr;
    ptr = &s1;
    (*ptr).rollno = 8717204; // we can use it but for more convinience we use a operator called as arrow operator
    ptr->marks = 87.7; // we can use both above as well as this sign to put the info in the structure.
    strcpy(ptr->name, "Deepak");
    show(s1);
    return 0;

}