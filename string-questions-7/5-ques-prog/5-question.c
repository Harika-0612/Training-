#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 50
bool anagram(char *str1,char *str2);
int main() {
   char str[MAX];
   fgets(str,MAX,stdin);
   int len=strlen(str);
   if(str[len-1]=='\n')
   {
       str[len-1]='\0';
       len--;
   }
   char *word[MAX];
   int word_count=0;
   char *token;
   token=strtok(str,",");
   while(token!=NULL)
   {
       word[word_count]=token;
       word_count++;
       token=strtok(NULL,",");
   }
   char *result[MAX];
   int reslen=0;
   for(int i=0;i<word_count;i++)
   {
       int isanagram=false;
       for(int j=0;j<word_count;j++)
       {
           if(i!=j && anagram(word[i],word[j]))
           {
               isanagram=true;
               break;
           }
       }
       if(!isanagram)
       {
           result[reslen]=word[i];
           reslen++;
       }
   }
   for(int i=0;i<reslen;i++)
   {
       if(i==0)
       {
           printf("%s",result[i]);
       }
       else
       {
            printf(",%s",result[i]);
       }    
   }
    return 0;
}
bool anagram(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1==len2)
    {
        char temp[len2];
        strcpy(temp,str2);
        int isanagram=0;
        for(int i=0;i<len1;i++)
        {
            int flag=0;
            char c=str1[i];
            for(int j=0;j<len2;j++)
            {
                if(c==temp[j])
                {
                    temp[j]=' ';
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                isanagram=1;
                break;
            }
        }
        if(isanagram==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
