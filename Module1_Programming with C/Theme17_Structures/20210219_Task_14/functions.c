#include "library.h"

struct Employee fillStruct(struct Employee emp[countEmp]){
    for(int i = 0; i < countEmp; i++) {
        printf("\nEnter employee id:\n");
        scanf(" %d", &emp[i].id);
        printf("Enter employee name:\n");
        scanf(" %s", &emp[i].name);
        printf("Enter employee middle name:\n");
        scanf(" %s", &emp[i].midName);
        printf("Enter employee last name:\n");
        scanf(" %s", &emp[i].lastName);
        printf("Enter employee position:\n");
        scanf(" %s", &emp[i].position);
        printf("Enter employee years of experience:\n");
        scanf(" %d", &emp[i].experience);
        printf("Enter employee salary:\n");
        scanf(" %f", &emp[i].salary);
    	fflush(stdin);
        printf("Enter employee's boss name:\n");
        scanf(" %s", &emp[i].p.name);
        fflush(stdin);
        printf("Enter employee's boss last name:\n");
        scanf(" %s", &emp[i].p.lastName);
    }
}

void printStruct(struct Employee employee[countEmp]){
    printf("\n\nList of all employees: \n");
    for(int i = 0; i < countEmp; i++) {
        printf(" Id: %d \n Name: %s\n Midname: %s\n Family: %s\n Position: %s\n Work Experience: %d\n Salary: %.2f\n Boss Name: %s\n Boss Family: %s\n\n",
                employee[i].id, employee[i].name, employee[i].midName, employee[i].lastName,
                employee[i].position,employee[i].experience, employee[i].salary, employee[i].p.name, employee[i].p.lastName);
    }
}