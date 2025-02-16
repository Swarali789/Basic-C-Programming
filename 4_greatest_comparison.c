#include <stdio.h>

int main()
{
    int a , b , c , d;
    printf("Enter 1st Number : ");
    scanf("%d" , &a);
    printf("Enter 2nd Number : ");
    scanf("%d" , &b);
    printf("Enter 3rdt Number : ");
    scanf("%d" , &c);
    printf("Enter 4th Number : ");
    scanf("%d" , &d);

    if(a>b && a>c && a>d)
    {
        printf("%d is greatest Number !",a);
    }
    else if(b>c && b>d)
    {
        printf("%d is greatest Number !",b);
    }
    else if(c>d)
    {
        printf("%d is greatest Numnber !",c);
    }
    else
    {
        printf("%d is greatest Number !",d);
    }

    return 0;
}