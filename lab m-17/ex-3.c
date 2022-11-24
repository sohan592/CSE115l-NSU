#include <stdio.h>
struct Employee{
    char name[50];
    int day;
    int month;
    int year;
    int salary;
};
void main(){
    struct Employee employee[4],highest;
    int i;
    printf("Enter information of Employees:\n");
    for(i=0;i<4;i++)
    {
        printf("Enter name: ");
        scanf("%s",employee[i].name);
        fflush(stdin);           
        printf("Enter D.O.B: ");
        scanf("%d%d%d",&employee[i].day,&employee[i].month,&employee[i].year);
        fflush(stdin);
        printf("Enter starting date:");
        scanf("%d%d%d",&employee[i].day,&employee[i].month,&employee[i].year);
        fflush(stdin);
        printf("Enter salary:");
        scanf("%d",&employee[i].salary);
        fflush(stdin);
        printf("\n");
    }
    printf("Displaying information of Employees:\n\n");
    for(i=0;i<4;i++)
    {
     printf("Name: ");
     puts(employee[i].name);
     printf("D.O.B:%d/%d/%d\n",employee[i].day,employee[i].month,employee[i].year);
     printf("Starting date:%d/%d/%d\n",employee[i].day,employee[i].month,employee[i].year);
     printf("Salary:%d\n",employee[i].salary);
     printf("\n");

   }
   highest.salary=employee[0].salary;
   highest.day=employee[0].day;
   highest.month =employee[0].month;
   highest.year=employee[0].year;
   for(int i=1;i<4;i++){
    if(highest.salary<employee[i].salary){
        highest.salary=employee[i].salary;
        highest.day=employee[i].day;
        highest.month =employee[i].month;
        highest.year=employee[i].year;
   }
   }
    printf("\nInfo of employee with highest salary:\n");
    printf("D.O.B:%d/%d/%d\n", highest.day,highest.month,highest.year);
    printf("Starting date:%d/%d/%d\n", highest.day,highest.month,highest.year);
    printf("Salary:%d",highest.salary);
}
