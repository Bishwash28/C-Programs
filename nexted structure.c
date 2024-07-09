#include<stdio.h>

main()

{

  struct date

  {

    int day, month,year;

  };

  struct employee

  {

    char name[20];

    int id;

    struct date dateofbirthday;

    float salary;

};

struct employee emp;

printf("Enter name of employee\t");

scanf("%s",emp.name);

printf("Enter ID of employee\t");

scanf("%d",&emp.id);

printf("Enter day of Birthday\t");

scanf("%d",&emp.dateofbirthday.day);

printf("Enter month of Birthday\t");

scanf("%d",&emp.dateofbirthday.month);

printf("Enter year of Birthday\t");

scanf("%d",&emp.dateofbirthday.year);

printf("Enter salary of the employee\t");

scanf("%f",&emp.salary);

printf("\nname\tid\tbirthday\tsalary\n=========================================\n");

printf("%s\t%d\t%d-%d-%d\t%f",emp.name,emp.id,emp.dateofbirthday.day,emp.dateofbirthday.month,emp.dateofbirthday.year,emp.salary);

}
