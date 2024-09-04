#include<stdio.h>
#include<stdlib.h>
int main()
{
 int score;
 printf("Enter the score:");
 scanf("%d",&score);
 if (score>=90 && score<=100)
 {
  printf("A grade \n");
 }
 else if (score>=80 && score<=89)
 {
  printf("B grade \n");
 }
 else if (score>=70 && score<=79)
 {
  printf("C grade \n");
 }
 else if (score>=60 && score<=69)
 {
  printf("D grade \n");
 }
 else if (score<60)
 {
  printf("Fail \n");
 }
 else
 {
  printf("Enter the valid score");
 }
 return EXIT_SUCCESS;
}


