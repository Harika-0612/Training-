#include<stdio.h>
#include<stdlib.h>
 int main()
 {
  int num;
  printf("Enter the positive integer:");
  scanf("%d",&num);
  int sum;
  sum=0;
  while(num!=0)
  {
   sum=sum+(num%10);
   num=num/10;
  }
  printf("Sum of the digits of given number is : %d \n",sum);
  return EXIT_SUCCESS;
 }

