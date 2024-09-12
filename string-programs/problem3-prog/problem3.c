#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
    char str[MAX];
    printf("enter the input string :");
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    char replace;
    printf("input character to replace :");
    scanf("%c",&replace);
    char replacewith;
    while(getchar()!='\n');
    printf("input character to replace with :");
    scanf("%c",&replacewith);
    char *ptr=strchr(str,replace);
    int index=ptr-str;
    str[index]=replacewith;
    fputs(str,stdout);
    return 0;
}
