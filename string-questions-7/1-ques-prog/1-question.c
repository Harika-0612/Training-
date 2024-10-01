#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
int main() {
    char str[MAX];
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    char res[MAX];
    int reslen=0;
    for(int i=0;i<len;i++)
    {
        res[reslen]=str[i];
        i=i+1;
        reslen++;
    }
    for(int i=0;i<reslen;i++)
    {
        printf("%c",res[i]);
    }
    printf("\n");
    return 0;
}
