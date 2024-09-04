#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b;
 printf("Enter the values of a and b :");
 scanf("%d %d",&a,&b);
 char op;
 printf("Enter the operation +,-,*,/,% :");
 scanf(" %c",&op);
 switch(op)
 {
  case '+':
      printf("%d + %d = %d \n ",a,b,a+b);
	  break;
  case '-':
      printf("%d - %d = %d \n",a,b,a-b);
	  break;
  case '*':
     printf("%d * %d = %d \n",a,b,a*b);
	 break;
  case '/':
     printf("%d / %d = %f \n",a,b,(float)a/b);
     break;
  case '%':
     printf("%d % %d = %d \n",a,b,a%b);
	 break;
  default:
     printf("Enter valid operation \n");
  }
  return EXIT_SUCCESS;
 }


