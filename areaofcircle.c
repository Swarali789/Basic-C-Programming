#include<stdio.h>
int main()
{
    //CODE FOR FINDING AREA OF A CIRCLE
    float A,r;
    printf("Enter the radius of a circle : ");
    scanf("%f",&r);

    A = 3.142 * r * r ; // EXPRESSION FOR AREA OF CIRCLE
    printf("The area of a circle of radius %f is : %f",r,A);

    return 0;
}
