#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
int main() {
    char str[MAX];
    printf("Enter pipe seperated sequence of words\n");
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
    token=strtok(str,"|");
    while(token!=NULL)
    {
        word[word_count]=token;
        word_count++;
        token=strtok(NULL,"|");
    }
    int vis[MAX]={0};
    for(int i=0;i<word_count;i++)
    {
        char *p=word[i];
        int c=0;
        if(vis[i]==0)
        {
          for(int j=0;j<word_count;j++)
          {
              if(strcmp(p,word[j])==0)
              {
                  vis[j]=1;
                  c++;
              }
           }
           if(c==1)
              {
                printf("%s|",word[i]);
              }
        }
    }
    
    printf("\n");
    return 0;
}
