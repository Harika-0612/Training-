#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
int arr[MAX];
printf("Enter the array elements");
for(int i=0;i<MAX;i++)
{
 scanf("%d",&arr[i]);
 }
 int sum=0;
 for(int i=0;i<MAX;i++)
 {
  sum+=arr[i];
  }
  float avg;
  avg=(float)sum/MAX;
  printf("sum = %d \n",sum);
  printf("avg = %f \n",avg);
 return 0;
 }

