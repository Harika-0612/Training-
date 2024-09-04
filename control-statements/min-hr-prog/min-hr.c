#include<stdio.h>
#include<stdlib.h>
#define Hour 60
int main()
{
 int min;
 printf("Enter no of minutes:");
 scanf("%d",&min);
 int hr;
 int mn;
 hr = min/Hour;
 mn = min%Hour;
 printf("%d minutes are %d hours,%d minutes \n",min,hr,mn);
 return EXIT_SUCCESS;
 }

