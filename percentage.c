#include<stdio.h>
int main()
{
    float maths = 93; // ! @ # $ % ^ & * ( ) { } [ ] : ;  ' | \ / ~ ` + - =
    float physics = 97; 
    float chemistry = 92; 
    float english = 90; 
    float economics = 86; 
    float p = (maths + physics + chemistry + english + economics ) / 5;
    printf("Percentage of 5 subjects is : %f", p);
    return 0;
}