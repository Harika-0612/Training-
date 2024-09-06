#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int main()
{
 int arr[MAX];
 printf("Enter the array elements:");
 for(int i=0;i<MAX;i++)
 {
 scanf("%d",&arr[i]);
 }
 int temp;
 for(int i=0;i<MAX/2;i++)
 {
  temp=arr[i];
  arr[i]=arr[MAX-1-i];
  arr[MAX-1-i]=temp;
  }
 for(int i=0;i<MAX;i++)
 {
   printf("%d ",arr[i]);
 }
 printf("\n");
 return EXIT_SUCCESS;
 }

