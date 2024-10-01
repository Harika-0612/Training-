#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
int isVowel(char c) ;
int main() {
    char str[MAX];
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    int deletion=0;
    int reslen=0;
    char res[MAX];
    for(int i=0;i<len;i++)
    {
        if(isVowel(str[i]) && isVowel(str[i+1]) && i<len-1)
        {
            deletion++;
            i++;
        }
         else
         {
             res[reslen]=str[i];
             reslen++;
         }
    }
     res[reslen] = '\0';
     printf("Number of deletions made: %d\n", deletion);
    for(int i=0;i<reslen;i++)
    {
        printf("%c",res[i]);
    }
    printf("\n");
    return 0;
}
int isVowel(char c) 
    {
      return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
