#include<stdio.h>
float force(float mass);
int main()
{float mass;
     printf("Enter the mass of the object in kg\n");
     scanf("%f",&mass);
     printf("The fore applied on the object is %f", force(mass));
    return 0;

}
float force(float mass){
    float g = 9.8,f;
    f = mass * g;
    return f;
}