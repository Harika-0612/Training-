#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Employee
{
    int id;
    char name[50];
    float salary;
} employee;
void printemployee(employee emp){
    printf("employee id : %d \n",emp.id);
    printf("employee name : %s \n",emp.name);
    printf("employee salary : %f \n",emp.salary);
}
int main()
{
    employee emp;
    printf("enter employee id:");
    scanf("%d",&emp.id);
    while(getchar()!='\n');
    printf("enter employee name:");
    fgets(emp.name,50,stdin);
    int len=strlen(emp.name);
    if(emp.name[len-1]=='\n')
    {
        emp.name[len-1]='\0';
        len--;
    }
    
    printf("enter employee salary:");
    scanf("%f",&emp.salary);
    
    printemployee(emp);
}
  
