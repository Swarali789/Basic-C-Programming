#include<stdio.h>
int main()
{
    // CODE TO FIND THE SIMPLE INTEREST
    float SI,P,R,T;
    printf("Enter the principal, rate and time respectively : ");
    scanf("%f %f %f",P,R,T);

    SI = ( P * R * T ) / 100; // FORMULA FOR SIMPLE INTEREST
    printf("The simple interest of the customer is : %f ", SI);
 
    return 0;
}
