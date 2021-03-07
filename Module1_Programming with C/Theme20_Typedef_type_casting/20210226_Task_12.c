/*Задача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
#define workerMax 10

typedef char* String;
struct Owner{
    String bname;
    String bfamily;
};

typedef struct worker{
    int number;
    String name;
    String midname;
    String family;
    String position;
    int workExperince;
    float salary;
    struct Owner p;
    
}Worker;

Worker fillArray(Worker *workers);
void printArray(Worker *workers);

int main(void){

    Worker *workers = (Worker*)malloc(10*sizeof(Worker));
    fillArray(workers);
    printArray(workers);

    free(workers);
    return 0;
}

Worker fillArray(Worker *workers){
    int i;
    for(i=0;i<workerMax;i++){
        (workers+i)->name = (String)malloc(size*sizeof(char));
        (workers+i)->midname = (String)malloc(size*sizeof(char));
        (workers+i)->family = (String)malloc(size*sizeof(char));
        (workers+i)->position = (String)malloc(size*sizeof(char));
        (workers+i)->p.bname = (String)malloc(size*sizeof(char));
        (workers+i)->p.bfamily = (String)malloc(size*sizeof(char));
        printf("Enter worker's number: \n");
        scanf("%d",&(workers+i)->number);
        printf("Enter worker's name: \n");
        scanf("%s",(workers+i)->name);
        printf("Enter worker's midname: \n");
        scanf("%s",(workers+i)->midname);
        printf("Enter worker's family: \n");
        scanf("%s",(workers+i)->family);
        printf("Enter worker's position: \n");
        scanf("%s",(workers+i)->position);
        printf("Enter worker's work experience: \n");
        scanf("%d",&(workers+i)->workExperince);
        printf("Enter worker's salary: \n");
        scanf("%f",&(workers+i)->salary);
        fflush(stdin);
        printf("Enter worker's boss name: \n");
        scanf("%s",(workers+i)->p.bname);
        fflush(stdin);
        printf("Enter worker's boss family: \n");
        scanf("%s",(workers+i)->p.bfamily);
    }
}

void printArray(Worker *workers){
    int i;
    printf("Worker's list: \n");
    for(i=0;i<workerMax;i++){
        printf("Number: %d \n Name: %s\n Midname: %s\n Family: %s\n Position: %s\n Work Experience: %d\n Salary: %.2f\n Boss Name: %s\n Boss Family: %s\n",(workers+i)->number,(workers+i)->name,
        (workers+i)->midname,(workers+i)->family,(workers+i)->position,(workers+i)->workExperince,(workers+i)->salary,(workers+i)->p.bname,(workers+i)->p.bfamily);
    }
}