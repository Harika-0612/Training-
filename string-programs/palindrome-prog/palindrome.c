#include <stdio.h>
#include<string.h>
int main() {
   int n=10;
   char ch[n];
   fgets(ch,n,stdin);
   int l=strlen(ch);
   if(ch[l-1]=='\n'){
       ch[l-1]='\0';
       l--;
   }
   int flag=0;
   for(int i=0;i<l/2;i++){
       if(ch[i]!=ch[l-i-1]){
           flag=1;
           break;
       }
   }
   if(flag==0){
       printf("it is");
   }
   else{
       printf("not");
   }

 
    return 0;
}
