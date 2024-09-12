#include<stdio.h>
#include<string.h>
#define MAX 30
int main()
{
 char str[MAX];
 printf("Enter the string:");
 fgets(str,MAX,stdin);
 fputs(str,stdout);
 printf("\n");
 int len;
 len=strlen(str);
 printf("length of string : %d \n",len);
 char copy[MAX];
 strcpy(copy,str);
 printf("string copy function -- \n");
 printf("%s",copy);
 printf("\n");
 char copy2[MAX];
 strncpy(copy2,str,5);
 printf("string n copy function -- \n");
 printf("%s",copy2);
 printf("\n");
 char str1[60];
 strcpy(str1,"Welcome to the party..!!");
 strcat(str1,str);
 printf("string concatinate function -- \n");
 printf("%s",str1);
 printf("\n");
 char str2[60];
 strcpy(str2,"Yeah..");
 strncat(str2,str,6);
 printf("string n concatinate function -- \n");
 printf("%s",str2);
 printf("\n");
 printf("strchr function -- \n");
 char* ptr = strchr(str,'e');
 if (ptr!=NULL)
 {
  printf(" '%c' found at position %ld \n",*ptr,ptr-str);
 }
 else
 {
  printf(" '%c' not found \n",*ptr);
 }
 printf("strrchr function -- \n");
 char* pt = strrchr(str,'e');
 if (pt!=NULL)
 {
  printf(" '%c' found at position %ld \n",*pt,pt-str);
 }
 else
 {
  printf(" '%c' not found \n",*pt);
 }

 printf("strchrnul function -- \n");
 char* p = strchr(str,'a');
 if (p!=NULL)
 {
  printf(" '%c' found at position %ld \n",*p,p-str);
 }
 else
 {
  printf(" '%c' not found \n",*p);
 }
}







