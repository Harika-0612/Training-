#include <stdio.h>
#include<string.h>
#define MAX 50
 
int main() {
    char str1[MAX];
    char str2[MAX];
    fgets(str1,MAX,stdin);
    int len1=strlen(str1);
    if(str1[len1-1]=='\n')
    {
        str1[len1-1]='\0';
        len1--;
    }
    fgets(str2,MAX,stdin);
    int len2=strlen(str2);
    if(str2[len2-1]=='\n')
    {
        str2[len2-1]='\0';
        len2--;
    }
    if(len1==len2)
    {
        int is_anagram=0;
        for(int i=0;i<len1;i++)
        {
           int flag=0;
            char c=str1[i];
            for(int j=0;j<len2;j++)
            {
                if(c==str2[j])
                {  
                    str2[j]=' ';
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                is_anagram=1;
                break;
            }
        }
        if(is_anagram==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }
    return 0;
}
