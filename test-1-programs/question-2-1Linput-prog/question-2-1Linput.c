#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
#define MIN 5
 
int main() {
    char str[MAX];
    printf("enter input lines :");
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    char ch;
    printf("enter the input character : \n");
    scanf("%c",&ch);
    while(getchar()!='\n');
    char word[MIN];
    printf("enter the input word : \n");
    fgets(word,MIN,stdin);
    int len1=strlen(word);
    if(word[len1-1]=='\n')
    {
        word[len1-1]='\0';
        len1--;
    }
    int position=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            position+=i;
        }
    }
    printf("sum of positions of char is : %d \n",position);
    int position1=0;
    int positionsum=0;
    int found =0;
    char *ptr = str;
    while((ptr=strstr(ptr,word))!=NULL)
    {
        position1=ptr-str;
        positionsum+=position1;
        found =1;
        ptr+=len1;
    }
    if(found==1)
    {
         printf("Sum of positions of the word is: %d\n", positionsum);
    }
    else
    {
        printf("Word not found in the input line.\n");
    }
    

    return 0;
}
