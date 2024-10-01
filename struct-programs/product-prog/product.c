#include <stdio.h>
#include <string.h>
#define size 5
#define max 10
struct product{
    char pid[max];
    int sales;
};
typedef struct product pro;
void *sort(pro *p,int a);
int main(){
    int c=0;
    pro p1[size];
    char str[max];
    int s;
    while(c<size){
        printf("enter the prodcut details:\n");
        scanf("%9[^-]-%d",str,&s);
            int flag=0;
            int indx=0;
            for(int j=0;j<c;j++){
                if(strcmp(str,p1[j].pid)==0){
                    flag=1;
                    indx=j;
                    break;
                }
            } 
                if(flag==1){
                    if(s>p1[indx].sales){
                        p1[indx].sales=s;
                    }
                }
                else{
                        strncpy(p1[c].pid,str,strlen(str));
                        p1[c].pid[strlen(p1[c].pid)]='\0';
                        p1[c].sales=s;
                         c++;
                    }
               while (getchar() != '\n');
            }
            sort(p1,c);
            for (int i=0;i<c;i++){
                printf("%s=%d\n",p1[i].pid,p1[i].sales);
            }
        } 
void *sort(pro *p,int c){
     for(int i=0;i<c-1;i++){
         for(int j=i+1;j<c;j++){
             if(p[i].sales>p[j].sales){
                 pro temp=*(p+i);
                 *(p+i)=*(p+j);
                 *(p+j)=temp;

             }
         }

     }
}
