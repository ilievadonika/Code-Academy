/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
#define COUNT_EMP 3

struct Boss{
    char name[SIZE];
    char lastName[SIZE];
};

struct Employee {
    int id;
    char name[SIZE];
    char midName[SIZE];
    char lastName[SIZE];
    char position[SIZE];
    int experience;
    float salary;
    struct Boss p;
};

struct Employee fillStruct(struct Employee emps[COUNT_EMP]);
void printStruct(struct Employee emps[COUNT_EMP]);

int main(void) {
    struct Employee emps[COUNT_EMP];
    fillStruct(emps);
    printStruct(emps);

    return 0;
}

struct Employee fillStruct(struct Employee emp[COUNT_EMP]){
    for(int i = 0; i < COUNT_EMP; i++) {
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

void printStruct(struct Employee employee[COUNT_EMP]){
    printf("\n\nList of all employees: \n");
    for(int i = 0; i < COUNT_EMP; i++) {
        printf(" Id: %d \n Name: %s\n Midname: %s\n Family: %s\n Position: %s\n Work Experience: %d\n Salary: %.2f\n Boss Name: %s\n Boss Family: %s\n\n",
                employee[i].id, employee[i].name, employee[i].midName, employee[i].lastName,
                employee[i].position,employee[i].experience, employee[i].salary, employee[i].p.name, employee[i].p.lastName);
    }
}