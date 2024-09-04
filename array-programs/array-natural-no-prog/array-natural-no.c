#include<stdio.h>
#include<stdlib.h>
# define MAX 10
int main()
{
 int arr[MAX];
 for(int i=0;i<MAX;i++)
 {
   arr[i]=i+1;
   }
  for(int i=0;i<MAX;i++)
  {
   printf("%d  ",arr[i]);
   }
   printf("\n");

   return 0;
  }

