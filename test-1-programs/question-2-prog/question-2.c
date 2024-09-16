#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int main() 
{
    char str[MAX][MAX];
    char word[MAX];
    char ch;
    int n;
    printf("enter the number of lines you want to enter : ");
    scanf("%d",&n);
    while(getchar()!='\n');
    for(int i=0;i<n;i++)
    {
        printf("enter %d line\n",i+1);
        fgets(str[i],MAX,stdin);
        int len=strlen(str[i]);
        if(str[i][len-1]=='\n')
        {
            str[i][len-1]='\0';
        }
    }
    printf("enter the input character : \n");
    scanf("%c",&ch);
    while(getchar()!='\n');
     printf("enter the input word : \n");
    fgets(word,MAX,stdin);
    int len1=strlen(word);
    if(word[len1-1]=='\n')
    {
        word[len1-1]='\0';
        len1--;
    }
    
    for(int i=0;i<n;i++)
    {
        int position=0;
        int l=strlen(str[i]);
        for(int j=0;j<l;j++)
        {
            if(str[i][j]==ch)
            {
                position+=j;
            }
        }
         printf("sum of positions of char in %d line is : %d \n",i+1,position);
    }
    for(int i=0;i<n;i++)
    {
        int position1=0;
        int positionsum=0;
        int found =0;
        char *ptr = str[i];
        while((ptr=strstr(ptr,word))!=NULL)
        {
           position1=ptr-str[i];
           positionsum+=position1;
           found =1;
           ptr+=len1;
        }
        if(found==1)
        {
           printf("Sum of positions of the word in line %d is: %d\n",i+1, positionsum);
        }
        else
        {
            printf("Word not found in the %d line.\n",i+1);
        }
    }

     return 0;
}
