#include<stdio.h>
int main()
{
    // CODE FOR FINDING PERCENTAGE
    float P,s1,s2,s3,s4,s5;
    printf("Enter the marks of all 5 subjects : ");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

    P = ( s1 + s2 + s3 + s4 + s5 ) * 100 / 500; // EXPRESSION FOR PERCENTAGE
    printf("The percentage of the student is : %f",P);

    return 0;
}