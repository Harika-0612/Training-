#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
    char name[50];
    unsigned int age;
    char grade;
} student;
int main()
{
    student student;
    printf("enter name:");
    fgets(student.name,50,stdin);
    int len=strlen(student.name);
    if(student.name[len-1]=='\n')
    {
        student.name[len-1]='\0';
        len--;
    }
    printf("enter age:");
    scanf("%d",&student.age);
    printf("enter grade:");
    scanf(" %c",&student.grade);
    printf("name : %s \n",student.name);
    printf("age : %d \n",student.age);
    printf("grade : %c \n",student.grade);
}
