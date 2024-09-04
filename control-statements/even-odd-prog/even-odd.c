#include<stdio.h>
#include<stdlib.h>
int main()
{
 int number;
 printf("Enter the number :");
 scanf("%d",&number);
 if(number%2 == 0)
 {
   printf("%d is a even number \n",number);
 }
 else
 {
  printf("%d is a odd number \n",number);
 }
 return EXIT_SUCCESS;
}

