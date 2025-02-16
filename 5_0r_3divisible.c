#include <stdio.h>
int main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%5==0)
    {
        if(n%3==0)
        {
            printf("The number is divisible by 3 & 5 !");
        }

        else
        {
            printf("The number is divisible by only 5 !"); 
        }
    }
    else 
    {
        if(n%3==0)
        {
            printf("The number is divisible by only 3 !");
        }
        else
        {
            printf("The number is divisible neither by 3 nor by 5 !");
        }
    }

    return 0;
}