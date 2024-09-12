#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
    char str[MAX];
    char str1[MAX];
    printf("enter the input string:");
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    printf("\n");
    printf("enter the input word to remove :");
    fgets(str1,MAX,stdin);
    int len1=strlen(str1);
    if(str1[len1-1]=='\n')
    {
        str1[len1-1]='\0';
        len1--;
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
    for(int i=word_count-1;i>=0;i--)
    {
        if(strcmp(word[i],str1)==0)
        {
            for(int k=i;k<word_count-1;k++)
            {
            word[k]=word[k+1];
            }
            word_count--;
            break;
        }
        
    }
    for(int i=0;i<word_count;i++)
    {
        printf("%s ",word[i]);
    }
    return 0;
}
