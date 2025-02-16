#include <stdio.h>

int main()
{
    int p;
    printf("Enter your percentage : ");
    scanf("%d",&p);

    if(p>=90 && p<=100)
    {
        printf("Excellent !");
    }
    else if(p>=80 && p<90)
    {
        printf("Very Good !");
    } 
    else if(p>=70 && p<80)
    {
        printf("Good !");
    }
    else if(p>=60 && p<70)
    {
        printf("Can Do Better !");
    }
    else if(p>=50 && p<60)
    {
        printf("Average !");
    }
    else if(p>=35 && p<50)
    {
        printf("Below Average !");
    }
    else if(p>=0 && p<35)
    {
        printf("Fail !");
    }

    return 0;
}