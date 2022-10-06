#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct details
{
  char name[30];
  int id;
  float salary;
} emp[5]; //struct details emp[5]
int n;
void InsertEmployee()
{
  int i;
  printf("\nEnter the number of employee: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    printf("\nEnter employee details: ");
    printf("\nid");
    scanf("%d", &emp[i].id);
    fflush(stdin);
    printf("\nName of employee :");
    gets(emp[i].name);
    printf("\nSalary :");
    scanf("%f", &emp[i].salary);
  }
}
void EmployeeSearch(int ida)
{
  int idf, i;
  printf("\nEnter empoyee id :");
  scanf("%d", &idf);
  for(i=0; i<ida; i++)
  {
    if(emp[i].id==idf)
    {
      printf("Employee id: %d",emp[i].id);
      printf("\nName : %s", emp[i].name);
      printf("\nSalary: %f",emp[i].salary);
    }
  }
}
void getAllemployee(int ida)
{
  int i;
  for(i=0; i<ida;i++ ){
  printf("%d\t%s \t%f \n ", emp[i].id, emp[i].name, emp[i].salary);
  }
}

void EmployeeCheck(int ida)
{
  int i;
  float salaryCheck;
  printf("\nDetails of Employee Whose salary = ? ");
  scanf("%f",&salaryCheck);
  for(i=0; i<ida; i++)
  {
    if(emp[i].salary>salaryCheck)
    {
      printf("Employee id : %d", emp[i].id);
      printf("\nName: %s", emp[i].name);
      printf("\nSalary : %f", emp[i].salary);}
  }
}

void menu()
{
  int ch;
  while(1)
  {
    printf("_______________________\n");
    printf("\t\tMenu\n");
    printf("_______________________\n");
    printf("\n 1.Ensert Employee");
    printf("\n 2.Display allEmployee ");
    printf("\n 3.Display emplyee name by salary");
    printf("\n 4.Search");
    printf("\n 5.Exit");
    printf("\nEnter your choice: ");
    scanf("\n %d", &ch);
    switch(ch)
    {
      case 1:
      InsertEmployee();
      break;
      case 2:
      getAllemployee(n);
      break;
      case 3:
      EmployeeCheck(n);
      break;
      case 4 :
      EmployeeSearch(n);
      break;
      case 5:
      exit(0);
    
    }
  }
}
int main()
{
  menu();
  return 0;
}




