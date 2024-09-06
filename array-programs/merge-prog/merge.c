#include<stdio.h>
#include<stdlib.h>
#define MAX1 5
#define MAX2 6
int main()
{
 int arr1[MAX1];
 int arr2[MAX2];
 int msize=MAX1+MAX2;
 int merged[msize];
 printf("Enter array1 elements:");
 for(int i=0;i<MAX1;i++)
 {
  scanf("%d", &arr1[i]);
 }
 printf("Enter array2 elements:");
 for(int i=0;i<MAX2;i++)
 {
  scanf("%d",&arr2[i]);
 }
 for(int i=0;i<MAX1;i++)
 {
  merged[i]=arr1[i];
 }
 for (int i=0;i<MAX2;i++)
 {
  merged[MAX1+i]=arr2[i];
 }
 printf("the merged array elements are:");
 for(int i=0;i<msize;i++)
 {
  printf("%d ",merged[i]);
 }
 printf("\n");
 return EXIT_SUCCESS;
}

