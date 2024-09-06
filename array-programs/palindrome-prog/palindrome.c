#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 int arr1[MAX];
 int i;
 int temp;
 printf("Enter 5 array elements ");
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<MAX;i++)
 {
  arr1[i]=arr[i];
 }
 for(i=0;i<MAX/2;i++)
 {
   temp=arr1[i];
   arr1[i]=arr1[MAX-i-1];
   arr1[MAX-i-1]=temp;
 }
 int flag=0;
 for(i=0;i<MAX;i++)
 {
  if(arr[i] != arr1[i])
  {
   flag=1;
   break;
  }
 } 
 if(flag==0)
 {
  printf("palindrome\n");
 }
 else
 {
  printf("not palindrome\n");
 } 

 return EXIT_SUCCESS;
 }

  
