#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
void reversestring(char *str);
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
    char *temp;
    for(int i=0;i<word_count;i++)
    {
        for(int j=0;j<word_count-i-1;j++)
        {
            if(strlen(word[j])>strlen(word[j+1]))
            {
                temp=word[j];
                word[j]=word[j+1];
                word[j+1]=temp;
            }
        }
    }
    for(int i=0;i<word_count;i++)
    {
        if(i>0)
        {
            printf("|");
        }
        printf("%s",word[i]);
    }
    printf("\n");
    return 0;
}

