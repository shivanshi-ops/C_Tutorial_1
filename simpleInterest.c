#include<stdio.h>
int main()
{
    float principal, rate, time, si; // 4 dabbe create ho jaate
    printf("Enter Principal : ");
    scanf("%f", &principal);
    printf("Enter Rate : ");
    scanf("%f", &rate);
    printf("Enter Time : ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    printf("Your simple interest is : %f", si);
    return 0;
}