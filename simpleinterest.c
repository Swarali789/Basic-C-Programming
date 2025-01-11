#include<stdio.h>
#include "simpleinterest.h"
int main()
{
    float SI,P,R,T;
    printf("Enter the principal, rate and time respectively : ");
    scanf("%f %f %f",P,R,T);

    SI = ( P * R * T ) / 100;
    printf("The simple interest of the customer is : %f ", SI);
 
    return 0;
}