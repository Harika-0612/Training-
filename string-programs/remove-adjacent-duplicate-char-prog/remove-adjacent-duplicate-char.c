#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30
int main() 
{
  char str[MAX];
  printf("enter the input word: \n");
  fgets(str,MAX,stdin);
  int len=strlen(str);
  if(str[len-1]=='\n')
  {
      str[len-1]='\0';
      len--;
  }
  char result[MAX];
  int reslen=0;
  for(int i=0;i<len;i++)
  {
      if(reslen==0 || str[i]!=result[reslen-1])
      {
          result[reslen]=str[i];
          reslen++;
      }
  }
  for(int i=0;i<reslen;i++)
  {
     printf("%c",result[i]);
  }
  printf("\n");
    return 0;
}
