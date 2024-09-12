#include <stdio.h>
#include<string.h>
#define MAX 50

int main() {
    char str[MAX];
    printf("Enter the input string:");
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
        word[word_count]=token;
        word_count++;
        token=strtok(NULL," ");
    }
    char *temp;
    for(int i=0;i<word_count/2;i++)
    {
            temp=word[i];
            word[i]=word[word_count-i-1];
            word[word_count-i-1]=temp;
    }
    for(int i=0;i<word_count;i++)
    {
        printf("%s ",word[i]);
    }
    

    return 0;
}
