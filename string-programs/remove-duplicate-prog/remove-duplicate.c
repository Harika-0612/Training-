#include <stdio.h>
#include<string.h>
int main() {
   int n=10;
   char ch[n];
   printf("enter the input string:");
   fgets(ch,n,stdin);
   int l=strlen(ch);
   if(ch[l-1]=='\n'){
       ch[l-1]='\0';
       l--;
   }
   int i,j,k;
  for(i=0;i<l;i++)
  {
      for(j=i+1;j<l;j++)
      {
          if(ch[i]==ch[j])
          {
              for(k=j;ch[k]!='\0';k++)
              {
                  ch[k]=ch[k+1];
              }
          }
      }
  }
  fputs(ch,stdout);
  printf("\n");
    return 0;
}
