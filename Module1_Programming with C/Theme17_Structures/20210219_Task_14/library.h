#include <stdio.h>
#include <stdlib.h>
#define size 15
#define countEmp 10

struct Boss{
    char name[size];
    char lastName[size];
};

struct Employee {
    int id;
    char name[size];
    char midName[size];
    char lastName[size];
    char position[size];
    int experience;
    float salary;
    struct Boss p;
};

struct Employee fillStruct(struct Employee emps[countEmp]);
void printStruct(struct Employee emps[countEmp]);