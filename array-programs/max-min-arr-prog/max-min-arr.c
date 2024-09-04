#include<stdio.h>
#define MAX 5
int main()
{
 int arr[5];
 for(int i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 int min=arr[0];
 int max=arr[0];
 for(int i=0;i<MAX;i++)
 {
  if(arr[i]<min)
  {
   min=arr[i];
   }
   if(arr[i]>max)
   {
   max=arr[i];
   }
   }
   printf("max element is %d \n",max);
   printf("min element is %d \n",min);
   return 0;
  }

