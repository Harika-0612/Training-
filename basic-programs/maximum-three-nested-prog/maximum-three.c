#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b,c;
 printf("Enter the three numbers:");
 scanf("%d %d %d",&a,&b,&c);
 
 printf("the maximum of three numbers is: %d \n", (a>b)?((a>c)?a:c):((b>c)?b:c));
 return EXIT_SUCCESS;
 }

