#include <stdio.h>

int main()
{
    int i , n , table;
    printf("Enter The Number : ");
    scanf("%d",&n);

    for(i=1 ; i<=10 ; i++)
    {
        table = n * i;
        printf("%d * %d = %d\n",n , i , table);
    }

    return 0;
}