#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 printf("Enter 5  array elements");
 for(int i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 int vis[MAX]={0};
 for(int i=0;i<MAX;i++)
 {
  int e=arr[i];
  int count=0;
  if(vis[i]==0)
  {
  for(int j=0;j<MAX;j++)
  {
   if(arr[j]==e)
     { 
	  count++;
	  vis[j]=1;
	 }
  }
   printf("%d appeared %d times \n",e,count);

  }
  }
  return EXIT_SUCCESS;
  }
