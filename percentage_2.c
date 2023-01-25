#include<stdio.h>
int main()
{
    float total = 40 * 4;
    float maths = 37;
    float physics = 30;
    float chemistry = 30;
    float english = 37;
    float p = ((maths + physics + chemistry + english) / total) * 100;
    printf("Percentage of 4 subjects is : %f", p);
    return 0;
}