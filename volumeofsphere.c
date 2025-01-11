#include<stdio.h>
int main()
{
    // CODE FOR VOLUME OF A SPHERE
    float r,V;
    printf("Enter the radius of the sphere : ");
    scanf("%f",&r);

    V = 4 * 3.142 * r * r * r / 3; //FORMULA FOR FINDING VOLUME
    printf("The volume of the sphere of radius %f is : %f",r,V);

    return 0;
}