#include<stdio.h>
#include<stdlib.h>
int main()
{
 int temp;
 printf("Enter the temperature :");
 scanf("%d",&temp);
 if (temp > 30)
 {
  printf("Its hot outside, stay hydrated! \n");
 }
 else if(temp<=30 && temp>=20)
 {
  printf("The wheather is nice and warm \n");
 }
 else if(temp>=10 && temp<=19)
 {
  printf("Its bit chilly, waer a jacket \n");
 }
 else if(temp<10)
 {
  printf("Its cloudy outside stay warm \n");
 }
 else
 {
  printf("Enter valid temperature \n");
 }
return EXIT_SUCCESS;
}
