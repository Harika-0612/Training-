#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 printf("Enter the array elements:");
 for(int i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 int temp;
 for(int i=0;i<MAX;i++)
 {
  for(int j=0;j<MAX-i-1;j++)
  {
  if(arr[j]>arr[j+1])
   {
    temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
  }
  }
  }
  for(int i=0;i<MAX;i++)
  {
   printf("%d ",arr[i]);
  }
  return EXIT_SUCCESS;
  }
