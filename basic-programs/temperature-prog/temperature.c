#include<stdio.h>
#include<stdlib.h>
int main()
{
 float celsius;
 printf("Enter temperature in celsius :");
 scanf("%f",&celsius);
 float fahrenheit;
 fahrenheit=(9/5)*celsius+32;
 printf("Given temperature in fahrenheit : %f \n",fahrenheit);
 return EXIT_SUCCESS;
}

