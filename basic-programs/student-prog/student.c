#include<stdio.h>
#include<stdlib.h>
int main()
{
 int student_score;
 char grade;
 printf("enter student score and grade :");
 scanf("%d",&student_score);
 scanf(" %c",&grade);
 printf("Your score is %d and grade is %c \n",student_score,grade);
 return EXIT_SUCCESS;
 }

