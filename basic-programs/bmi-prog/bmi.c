#include<stdio.h>
#include<stdlib.h>
int main()
{
 float w,h;
 printf("Enter weight in kgs and height in meters:");
 scanf("%f %f",&w,&h);
 float bmi;
 bmi=w/(h*h);
 printf("The bmi is :%f \n",bmi);
 return EXIT_SUCCESS;
 }


