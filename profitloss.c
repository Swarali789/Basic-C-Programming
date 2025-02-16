#include <stdio.h>
int main()
{
    // CODE TO FIND PROFIT AND LOSS
    int SP,CP;
    printf("Enter the selling price and the cost price : ");
    scanf("%d %d",&SP,&CP);

    if(SP>CP)
    {
        printf("There is a profit ");
    }
    else if(CP>SP)
    {
        printf("There is a loss ");
    }
    else
    {
        printf("There is neither the loss nor the profit ");    
    }

    return 0;
}