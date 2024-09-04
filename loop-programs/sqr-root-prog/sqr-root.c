#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 int num,lower_sqr,upper_sqr,lower_root,upper_root,closest;
 printf("Enter the positive integer:");
 scanf("%d",&num);
 lower_root=(int)sqrt(num);
 upper_root=lower_root+1;
 lower_sqr=lower_root*lower_root;
 upper_sqr=upper_root*upper_root;
 if((num-lower_sqr)<=(upper_sqr-num))
 {
  closest=lower_sqr;
  }
  else
  {
   closest=upper_sqr;
   }
   printf("the closest square root of given number is: %d \n",closest);
   return 0;
   }

