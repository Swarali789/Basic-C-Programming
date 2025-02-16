#include <stdio.h>

int main()
{
    int m1 , m2 , x1 , x2 , x3 , y1 , y2 , y3 ;
    printf("Enter coordinate of x-axis (x1) : ");
    scanf("%d",&x1);
    printf("Enter coordinate of x-axis (x2) : ");
    scanf("%d",&x2);
    printf("Enter coordinate of x-axis (x3) : ");
    scanf("%d",&x3);
    printf("Enter coordinate of y-axis (y1) : ");
    scanf("%d",&y1);
    printf("Enter coordinate of y-axis (y2) : ");
    scanf("%d",&y2);
    printf("Enter coordinate of y-axis (y3) : ");
    scanf("%d",&y3);

    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);

    if(m1 == m2)
    {
        printf("The points fall on one straight line !");
    }
    else
    {
        printf("The points does not fall on one straight line !");
    }

    return 0;
}