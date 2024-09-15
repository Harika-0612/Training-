#include <stdio.h>
#include<stdlib.h>
int main() {
    int max;
    printf("enter the max number");
    scanf("%d",&max);
    int arr[max];
    printf("enter the array elements up to max number: \n");
    for(int i=0;i<max;i++)
    {
        scanf("%d",&arr[i]);
    }
    int e;
    for(int i=1;i<=max;i++)
    {
        int flag=0;
        e=i;
        for(int j=0;j<max;j++)
        {
         if(arr[j]==e)
         {
            flag=1;
            break;
         }
        }
        if(flag==0)
        {
            printf("missing element is : %d",e);
        }
    }
    return 0;
}
