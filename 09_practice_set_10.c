#include<stdio.h>
typedef struct time
{
    int Hours;
    int Minutes;
    int Secound;
}time;
void display(time t){
    printf("The date is: %d/%d/%d\n", t.Hours, t.Minutes, t.Secound);
}

int timecmp(time t1, time t2){
    if (t1.Hours>t2.Hours)
    {
        return 1;
    }
    if (t1.Hours<t2.Hours)
    {
        return -1;
    }
    if (t1.Minutes>t2.Minutes)
    {
        return 1;
    }
    if (t1.Minutes<t2.Minutes)
    {
        return -1;
    }
    if (t1.Secound>t2.Secound)
    {
        return 1;
    }
    if (t1.Secound<t2.Secound)
    {
        return -1;
    }
    return 0;
} 
int main()
{
    time t1 = {2,11,11};
    time t2 = {2,11,21};
    display(t1);
    display(t2);
    int a = timecmp(t1, t2);
    printf("time comparison functions return: %d", a);
    return 0;

}