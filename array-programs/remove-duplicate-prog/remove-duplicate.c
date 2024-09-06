#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 int vis[MAX]={0};
 int i,j;
 printf("Enter 5 array elements :");
 for(int i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(int i=0;i<MAX;i++)
 {
  int e=arr[i];
  if(vis[i]==0)
  {
   for(int j=0;j<MAX;j++)
   {
    if(arr[j]==e)
	{
	 vis[j]=1;
	 }
	}
   printf("%d ",e);
   }
  }
  return EXIT_SUCCESS;
  }
