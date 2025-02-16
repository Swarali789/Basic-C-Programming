#include <stdio.h>

int main()
{
    int x , y ;
    printf("Enter the x coordinate of a point : ");
    scanf("%d",&x);
    printf("Enter the y coordinate of a point : ");
    scanf("%d",&y);

    if(x == 0 && y != 0)
    {
        printf("The point lies on y-axis !");
    }
    else if(x != 0 && y == 0)
    {
        printf("The point lies on x-axis !");
    }
    else if(x == 0 && y == 0)
    {
        printf("The point lies on origin !");
    }
    else 
    {
        printf("The point neither lies on x-axis nor on y-axis !");
    }

    return 0;
}