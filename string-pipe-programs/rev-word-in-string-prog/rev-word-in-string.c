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
        reversestring(token);
        word[word_count]=token;
        word_count++;
        token=strtok(NULL,"|");
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
void reversestring(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
