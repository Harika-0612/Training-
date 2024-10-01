#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 50
bool anagram(char *word1,char *word2);
int main() {
    char str[MAX];
    printf("Enter the comma ',' seperated words \n");
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
    int allanagram=0;
    for(int i=1;i<word_count;i++)
    {
        if(!anagram(word[0],word[i]))
        {
            allanagram=1;
            break;
        }
    }
    if(allanagram==0)
    {
        printf("true \n");
    }
    else
    {
        printf("false \n");
    }
    return 0;
}
bool anagram(char *word1,char *word2)
{
    int len1=strlen(word1);
    int len2=strlen(word2);
    if(len1==len2)
    {
        int is_anagram=0;
        for(int i=0;i<len1;i++)
        {
           int flag=0;
            char c=word1[i];
            for(int j=0;j<len2;j++)
            {
                if(c==word2[j])
                {  
                    word2[j]=' ';
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                is_anagram=1;
                break;
            }
        }
         if(is_anagram==0)
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
