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
 int search;
 printf("Enter the search element:");
 scanf("%d",&search);
 int flag=0;
 for(int i=0;i<MAX;i++)
 {
   if(arr[i]==search)
    {
	  printf("index of search element is : %d \n",i);
	  flag=1;
	  }
  }
  if(flag==0)
  {
  printf("index not found \n");
  }
  return EXIT_SUCCESS;
  }

