#include<stdio.h>
#include<string.h>
#define MAX 30
int main()
{
 char str[MAX]="Hello everyone how are you?";
 char str2[MAX]="how";
 char* p=strstr(str,str2);
 if(p!=NULL)
 {
  printf("substring '%s' found at position %ld \n",str2,p-str);
 }
 else
 {
  printf("substring not found \n");
 }
 return 0;
}

