#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
    char title[50];
    char author[50];
    float price;
} book;
int main()
{
    book b[5];
    for(int i=0;i<5;i++)
    {
    printf("enter title:");
    fgets(b[i].title,50,stdin);
    int len=strlen(b[i].title);
    if(b[i].title[len-1]=='\n')
    {
        b[i].title[len-1]='\0';
        len--;
    }
    printf("enter author name:");
    fgets(b[i].author,50,stdin);
    int len1=strlen(b[i].author);
    if(b[i].author[len1-1]=='\n')
    {
        b[i].author[len1-1]='\0';
        len1--;
    }
    printf("enter price:");
    scanf(" %f",&b[i].price);
    while(getchar()!= '\n');
    }
    for(int i=0;i<5;i++)
    {
     printf("title : %s \n",b[i].title);
     printf("author : %s \n",b[i].author);
     printf("price : %f \n",b[i].price);
    }
}
