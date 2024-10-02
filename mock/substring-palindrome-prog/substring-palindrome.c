#include <stdio.h>
#include<string.h>
#define MAX 50
int palcheck(char *s);
 
int main() {
    char str[MAX];
    char temp[MAX];
    int m=0;
    fgets(str,MAX,stdin);
    int l=strlen(str);
    if(l>0 && str[l-1]=='\n')
    {
        str[l-1]='\0';
        l--;
    }
    for(int i=0;i<l;i++)
    {
        for(int j=1;j<=l-i;j++)
        {
            strncpy(temp,str+i,j);
            temp[j]='\0';
            int pal=palcheck(temp);
            if(pal==1 && m<j)
            {
                m=j;
            }
        }
    }
    printf("%d",m);
 
    return 0;
}
int palcheck(char *s)
{
    int len=strlen(s);
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return 0;
        }
    }
    return 1;
}
