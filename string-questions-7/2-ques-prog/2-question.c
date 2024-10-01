#include <stdio.h>
#include<string.h>
#define MAX 50
int main() {
    char str[MAX];
    char temp[MAX]="";
    fgets(str,MAX,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    {
        str[len-1]='\0';
        len--;
    }
    int flag=1;
    while(flag==1)
    {
        int p=0;
        int len=strlen(str);
        for(int i=0;i<len;)
        {
            if(i!=len-1 && str[i]==str[i+1])
            {
                i=i+2;
                p=1;
            }
            else
            {
                char e[2]={str[i],'\0'};
                strcpy(temp,e);
                i=i+1;
            }
        }
        temp[strlen(temp)]='\0';
        strcpy(str,temp);
        strcpy(temp,"");
        if(p==0)
        {
            flag=0;
        }
    }
    printf("%s",str);
 
    return 0;
}
