#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 int i,j;
 printf("enter 5 array elements:");
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 int temp;
 for(i=0;i<MAX;i++)
 {
  for(j=0;j<MAX-i-1;j++)
  {
   if(arr[j]>arr[j+1])
   {
    temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
   }
  }
 }
 for(i=MAX-1;i>=0;i--)
 {
  if(arr[i]>arr[i-1])
  {
   printf("second largest element is :%d \n",arr[i-1]);
   break;
  }
 }
 return EXIT_SUCCESS;
} 

