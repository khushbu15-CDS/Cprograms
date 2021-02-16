/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include<string.h>
// void p(struct j)
// {
// for(int i=0;i<3;  i++)
// {
//     printf("enter employee id");
//     printf("%s",emp[i].id);
//     printf("enter employee name");
//   printf("%s", emp[i].name);
// }
    
    
//}
char sId[10];
int flag=0;

struct salary{
    int basic;
    int salaryid; 
    char currency[20];
};
struct e{
    char id[20];
    char name[20];
    
    struct salary empsalary;
}emp[2],*empptr;



int main()
{
    //printf("Hello World");
    struct e emp[2];
  //  empptr =&emp;
    
    
for(int i=0;i<2;  i++)
{
    printf("enter employee id :");
    scanf("%s",emp[i].id);
    printf("enter employee name :");
    scanf("%s", emp[i].name);
    printf("enter the \"%s\" basic salary :",emp[i].name);
    scanf("%d",&emp->empsalary.basic);
     printf("enter the salary ID :");
     scanf("%d", &emp->empsalary.salaryid);
     printf("enter the currenc :");
     scanf("%s",emp->empsalary.currency);

}

    
for(int i=0;i<2;  i++)
{
  
    printf("\nID : %s",emp[i].id);
    printf("\nName :%s", emp[i].name);
    printf("\nBasic salary :%d", emp->empsalary.basic);
    printf("\nSalary ID :%d", emp->empsalary.salaryid);
    printf("\nCurrency :%s", emp->empsalary.currency);
    printf("\n");
}
printf("\n\n");


printf("enter the id to search>> ");
scanf("%s",sId);
for(int i=0; i<2;i++)
{
    if(strcmp(sId, emp[i].id)==0)
    {
        printf("The employee name is \"%s\" and id is \"%s\"\n", emp[i].name,sId);
        printf("\nBasic salary :%d", emp->empsalary.basic);
        printf("\nSalary ID :%d", emp->empsalary.salaryid);
        printf("\nCurrency :%s", emp->empsalary.currency);
        
         flag=1;
    break;
       
    }

}
if(flag==0)
    printf("Employee with ID \"%s\" not found.\n",sId);
    return 0;
}
