#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int num,square,last_digits;
 printf("Enter the number :");
 scanf("%d",&num);
 int temp_num;
 temp_num=num;
 int no_of_digits=0;
 square=num*num;
 printf("square of number is : %d \n",square);
 while(temp_num>0)
 {
  temp_num=temp_num/10;
  no_of_digits++;
  }
  int divisor=1;
  for(int i=0;i<no_of_digits;i++)
  {
   divisor*=10;
   }
 
  last_digits=square%divisor;
  if(last_digits==num)
  {
  printf("Automorphic number\n");
  }
  else
  {
  printf(" not a automorphic number \n");
  }
  return EXIT_SUCCESS;
 }

