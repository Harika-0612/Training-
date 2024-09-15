#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
    int arr1[MAX];
    int arr2[MAX];
    int msize=MAX+MAX;
    int merged[msize];
    int i,j;
    printf("Enter 5 array1 elements : \n");
    for(i=0;i<MAX;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 array2 elements : \n");
    for(i=0;i<MAX;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("The merged array is : ");
    for(i=0;i<MAX;i++)
    {
        merged[i]=arr1[i];
    }
    for(i=0;i<MAX;i++)
    {
        merged[MAX+i]=arr2[i];
    }
    for(i=0;i<msize;i++)
    {
        printf("%d ",merged[i]);
    }
    printf("\n");
    int filter[msize];
    int new_size=0;
    for(i=0;i<msize;i++)
    {
        if(merged[i]%2!=0)
        {
            filter[new_size]=merged[i];
            new_size++;
        }
    }
    printf("merged array after removing even numbers is :");
    for(i=0;i<new_size;i++)
    {
        printf("%d ",filter[i]);
    }
    int temp;
    for(i=0;i<new_size;i++)
    {
        for(j=0;j<new_size-i-1;j++)
        {
            if(filter[j]>filter[j+1])
            {
                temp=filter[j];
                filter[j]=filter[j+1];
                filter[j+1]=temp;
            }
        }
    }
    printf("The sorted array is :");
    for(i=0;i<new_size;i++)
    {
        printf("%d ",filter[i]);
    }
    printf("\n");
    return 0;
}
