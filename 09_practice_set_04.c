#include<stdio.h>
typedef struct complex
{
    int x;
    float y;
}cp;
void show(cp c1)
{
   printf("The X Dim of c1 %d and Y Dim of c1 %f" , c1.x , c1.y);    
  
}
int main()
{
    cp c1;
    c1.x = 5;
    c1.y = 6.6;
    show(c1);
    return 0;
}