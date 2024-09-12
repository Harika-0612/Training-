#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
int palscore(char* cpy,int s,int len);
int main() {
    char str[MAX];
    char cpy[MAX];
    int score=0;
    printf("Enter the input string :");
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    for(int i=0;i<len;i++)
    {
        if(i+4<=len)
        {
            strncpy(cpy,str+i,4);
            cpy[4]='\0';
            score=palscore(cpy,score,4);
        }
        if(i+5<=len)
        {
            strncpy(cpy,str+i,5);
            cpy[5]='\0';
            score=palscore(cpy,score,5);
        }
    }
    score=palscore(cpy,score,len);
    printf("score= %d \n",score);
    return 0;
}
int palscore(char* cpy,int s,int len)
{
    char temp[len+1];
    for(int i=0;i<len;i++)
    {
        temp[i]=cpy[len-i-1];
    }
    temp[len]='\0';
    if(strcmp(cpy,temp)==0)
    {
        if(len==4)
        {
            s=s+5;
        }
        if(len==5)
        {
            s=s+10;
        }
    }
    return s;
}
