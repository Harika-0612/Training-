#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a;
   int b;
   printf("Enter two numbers :");
   scanf("%d %d",&a,&b);
   int max;
   (a>b)?(max=a):(max=b);
   printf("maximum of %d and %d is %d \n",a,b,max);
   return EXIT_SUCCESS;
}


