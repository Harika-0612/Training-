#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
void capital(char *str);
int main()
{
    char str[MAX];
    printf("Enter the input sentence : \n");
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
    token=strtok(str," ");
    while(token!=NULL)
    {
        capital(token);
        word[word_count]=token;
        word_count++;
        token=strtok(NULL," ");
    }
    for(int i=0;i<word_count;i++)
    {
        printf("%s ",word[i]);
    }
    printf("\n");
    return 0;
}
void capital(char *str)
{
    int len=strlen(str);
    str[len-1]=(char)((int)str[len-1]-32);
}
