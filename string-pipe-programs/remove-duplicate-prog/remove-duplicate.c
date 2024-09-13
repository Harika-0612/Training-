#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
int main()
{
    char str[MAX];
    printf("enter pipe seperated sequence of words :\n");
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    char* word[MAX];
    int word_count=0;
    char* token;
    token=strtok(str,"|");
    while(token!=NULL)
    {
        word[word_count]=token;
        word_count++;
        token=strtok(NULL,"|");
    }
    for(int i=0;i<word_count;i++)
    {
        for(int j=i+1;j<word_count;j++)
        {
            if(strcmp(word[i],word[j])==0)
            {
                for(int k=j;k<word_count-1;k++)
                {
                    word[k]=word[k+1];
                }
				word_count--;
				j--;
            }
        }
    }
    for(int i=0;i<word_count;i++)
    {
        if(i==0)
        {
            printf("%s",word[i]);
        }
        else
        {
            printf("|%s",word[i]);
        }
        
    }
    printf("\n");
    return 0;
    
}
