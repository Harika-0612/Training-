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
    printf("enter the substring :");
    fgets(str1,MAX,stdin);
    int len1=strlen(str1);
    if(str1[len1-1]=='\n')
    {
        str1[len1-1]='\0';
        len1--;
    }
    char* ptr;
    ptr=strstr(str,str1);
    printf("substring found at position: %ld",ptr-str);
    return 0;
}


