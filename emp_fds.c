#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct details
{
     char name[30];
     int eid;
     int salary,age;
}emp[5];

void deletee()
{
  int h;
  printf("\nWhich Employee Id you want to delete:-  ");
  scanf("%d",&h);
  emp[h].eid='\0';
  strcpy(emp[h].name, "");
  emp[h].salary='\0';
  emp[h].age='\0';
}
void modify()
{
  int h;
  printf("Which Employee details you want to modify:- ");
  scanf("%d",&h);
  scanf("%d",&emp[h].eid);
  scanf("%s",emp[h].name);
  scanf("%d",&emp[h].salary);
  scanf("%d",&emp[h].age);

}

void emp_search(int r)
{
     int id,i;
     printf("\nEnter Employee-Id to be Searched : ");
     scanf("%d",&id);
     printf("----------------------------------------\n");
     for(i=0;i<r;i++)
     {
          if(emp[i].eid==id)
          {
               printf("Employee Id :- %d",emp[i].eid);
               printf("\nName        :- %s",emp[i].name);
               printf("\nSalary      :- %d\n",emp[i].salary);
               printf("\nAge      :- %d\n",emp[i].age);
          }
     }
}
void display(int r)
{
     int i;
     printf("\nAll Employees:\n\n");

     printf("Emp-Id\tEmp-Name\tSalary\n");

     for(i=0;i<r;i++)
     {
          printf("\n%d\t%s\t%d\t%d\n",emp[i].eid,emp[i].name,emp[i].salary,emp[i].age);
     }
}

int main()
{
     int n,i,ch;
     printf("Total no. of Employee  :- ");
     scanf("\n %d",&n);
     for(i=0;i<n;i++)
     {

          printf("\n\tEnter Details of Employee:- %d",i+1);
          printf("\n-----------------------------------------");
          printf("\nName of Employee :- ");
          scanf("%s",emp[i].name);
          printf("Employee-Id      :- ");
          scanf("%d",&emp[i].eid);
          printf("Salary	:- ");
          scanf("%d",&emp[i].salary);
          printf("Age   :-   ");
          scanf("%d",&emp[i].age);

     }
     while(1)
     {
          printf("\n 1:Display All Employee  ");
          printf("\n 2:Search Employee by E-ID  ");
          printf("\n 3:Delete by E-Id");
          printf("\n 4:Modify the Employee details");
          printf("\n----------------------------------------\n");
          printf("Enter Your Choice :- ");
          scanf("\n %d",&ch);
          switch(ch)
          {
               case 2: emp_search(n);
               break;
               case 1: display(n);
               break;
               case 3: deletee();
               break;
               case 4: modify();
               break;
               default: printf("Enter the correct choice  ");
               break;
          }
     }
     return 0;
}
