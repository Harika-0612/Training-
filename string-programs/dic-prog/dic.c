#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
    char str[MAX];
    printf("enter the input string:");
    fgets(str,MAX,stdin);
    int len=strlen(str);
        if(str[len-1]=='\n')
        {
            str[len-1]='\0';
            len--;
        }
    char *words[MAX];  
    int word_count=0;
    char *token;
	token = strtok(str, " ");
	while(token != NULL)
	{
	    words[word_count]=token;
		word_count++;
		token = strtok(NULL, " ");
	}
    char *temp;
    for(int i=0;i<word_count;i++)
    {
        for(int j=0;j<word_count-i-1;j++)
        {
            if(strcmp(words[j],words[j+1])>0)
            {
                temp=words[j];
                words[j]=words[j+1];
                words[j+1]=temp;
            }
        }
    }
    for(int i=0;i<word_count;i++)
    {
        printf("%s ",words[i]);
    }
    return 0;
}
