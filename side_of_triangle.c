#include <stdio.h>

int main()
{
    int a , b , c;
    printf("Enter 1st side of triangle : ");
    scanf("%d",&a);
    printf("Enter 2nd side of triangle : ");
    scanf("%d",&b);
    printf("Enter 3rd side of triangle : ");
    scanf("%d",&c);

    if(a+b>c || b+c>a || a+c>b)
    {
        printf("The three sides are of a Triangle !");
    }
    else
    {
        printf("The three sides are not of a triangle !");
    }

    return 0;
}