#include<stdio.h>
#include<stdlib.h>
# define PI 3.14
int main()
{
 float radius;
 float area;
 float circumference;
 printf("enter the radius :");
 scanf("%f",&radius);
 area = PI*radius*radius;
 circumference=2*PI*radius;
 printf("area of circle is : %f \n",area);
 printf("circumference of circle is : %f \n",circumference);
 return EXIT_SUCCESS;
 }

