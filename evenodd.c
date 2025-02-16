#include <stdio.h>
int main()
{
   //CODE TO FIND EVEN OR ODD NUMBERS
   int N;
   printf("Enter a number : ");
   scanf("%d",&N);
   
   if (N%2==0)
   {
     printf("The entered number %d is even ",N);
   }
   else
   {
     printf("The entered number %d is odd ",N);
   }

   return 0;

}