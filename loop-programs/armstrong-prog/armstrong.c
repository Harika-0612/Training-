#include<stdio.h>
#include<stdlib.h>
int main()
{
 int num;
 printf("Enter the number:");
 scanf("%d",&num);
 int temp_num;
 temp_num=num;
 int no_of_digits=0;
 while(temp_num>0)
 {
   temp_num=temp_num/10;
   no_of_digits++;
  } 
  temp_num=num;

  int result=0;
  int digit;
  for(int i=0;i<no_of_digits;i++)
  {
    int value=1;
    digit=temp_num%10;
    for(int j=0;j<no_of_digits;j++)
	{
	  value*=digit;
	  }
	result+=value;
	temp_num/=10;
  }
  printf("%d \n",result);
  if(num==result)
  {
   printf("Armstrong\n");
  }
  else
  {
   printf(" not armstrong \n");
   }
   return EXIT_SUCCESS;
  }


