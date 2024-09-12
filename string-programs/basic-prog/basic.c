#include<stdio.h>
#include<string.h>
#define MAX 10
int main()
{
 char s[MAX];
 printf("enter the strings:");
 fgets(s,MAX,stdin);
 fputs(s,stdout);
 int len;
 len=strlen(s);
 printf("length of string is : %d \n",len);
 return 0;
} 
