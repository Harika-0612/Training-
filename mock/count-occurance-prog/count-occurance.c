#include <stdio.h>
#include<string.h>
#define MAX 50
 
int main() {
   char str1[MAX];
   char str2[MAX];
   printf("Enter first list of comma seperated integers \n");
   fgets(str1,MAX,stdin);
   int len1=strlen(str1);
   if(str1[len1-1]=='\n')
   {
       str1[len1-1]='\0';
       len1--;
   }
   printf("Enter second list of comma seperated integers \n");
   fgets(str2,MAX,stdin);
   int len2=strlen(str2);
   if(str2[len2-1]=='\n')
   {
       str2[len2-1]='\0';
       len2--;
   }
   char *word1[MAX];
   int  word_count1=0;
   char *token1;
   token1=strtok(str1,",");
   while(token1!=NULL)
   {
       word1[word_count1]=token1;
       word_count1++;
       token1=strtok(NULL,",");
   }
   char *word2[MAX];
   int word_count2=0;
   char *token2;
   token2=strtok(str2,",");
   while(token2!=NULL)
   {
       word2[word_count2]=token2;
       word_count2++;
       token2=strtok(NULL,",");
   }
   char count[MAX]={0};
   for(int i=0;i<word_count1;i++)
   {
       for(int j=0;j<word_count2;j++)
       {
           if(strcmp(word1[i],word2[j])==0)
           {
               count[i]++;
           }
       }
   }
   for(int i=0;i<word_count1;i++)
   {
      printf("%s-%d\n",word1[i],count[i]);
   }
    return 0;
}
