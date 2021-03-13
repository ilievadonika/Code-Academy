/*Задача 17.
Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват масиви
с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.
*/

#include <stdio.h>
#include <stdlib.h>

typedef char* String;
typedef struct participants{
    int id;
    String name;
    String familyName;
    int age;
}Participants;

Participants* fillParticipants(int number);
void printParticipants(Participants *part,int number);

int main(void){

    int number;
    printf("Enter the number of the participants:\n");
    scanf("%d", &number);

    Participants *part = (Participants*)malloc(number*sizeof(Participants));
    part = fillParticipants(number);
    printParticipants(part, number);

    free(part);
    return 0;
}

Participants* fillParticipants(int number){
    int i;

    FILE *fp;
    char *fileName = "zad17.txt";
    fp = fopen(fileName,"wt");

    if (fp == NULL){
        printf("Error oppening fail!\n");
        exit(1);
    }
    Participants* fullList = (Participants*)malloc(number*sizeof(Participants));
    for(i = 0; i < number; i++){
        (fullList+i)->name = (String)malloc(20*sizeof(char));
        (fullList+i)->familyName = (String)malloc(20*sizeof(char));
        printf("Enter the id of the participant:\n");
        scanf("%d",&(fullList + i)->id);
        printf("Enter the name of the participant:\n");
        scanf("%s",(fullList + i)->name);
        printf("Enter the family name of the participant:\n");
        scanf("%s",(fullList + i)->familyName);
        printf("Enter the age of the participant:\n");
        scanf("%d",&(fullList + i)->age);
        fprintf(fp,"ID: %d\tFirst name: %s\tFamily name: %s\tAge: %d\n",
                (fullList + i)->id, (fullList + i)->name, (fullList + i)->familyName, (fullList + i)->age);
    }

    return fullList;
}

void printParticipants(Participants *part,int number){

    int i;
    for(i=0;i<number;i++){
        printf("Id: %d\tName: %s\tFamily name: %s\tAge: %d\t\n",(part+i)->id,(part+i)->name,(part+i)->familyName,(part+i)->age);
    }
}