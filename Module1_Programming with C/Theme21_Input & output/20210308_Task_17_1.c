/*Sort*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;
typedef struct participants{
    int id;
    String name;
    String familyName;
    int age;
}Participants;

Participants* fillParticipants(int number);
void printParticipants(Participants *part,int number);
Participants* sortParticipants(Participants *part,int number);

int main(void){

    int number;
    printf("Enter the number of the participants:\n");
    scanf("%d",&number);

    Participants *part = (Participants*)malloc(number*sizeof(Participants));
    part = fillParticipants(number);
    part = sortParticipants(part,number);
    printParticipants(part,number);

    free(part);
    return 0;
}

Participants* fillParticipants(int number){

    int i;
    
    Participants* fullList = (Participants*)malloc(number*sizeof(Participants));
    for(i=0;i<number;i++){
        (fullList+i)->name = (String)malloc(20*sizeof(char));
        (fullList+i)->familyName = (String)malloc(20*sizeof(char));
        printf("Enter the id of the participant:\n");
        scanf("%d",&(fullList+i)->id);
        printf("Enter the name of the participant:\n");
        scanf("%s",(fullList+i)->name);
        printf("Enter the family name of the participant:\n");
        scanf("%s",(fullList+i)->familyName);
        printf("Enter the age of the participant:\n");
        scanf("%d",&(fullList+i)->age);
    }

    return fullList;
}

void printParticipants(Participants *part,int number){

    int i;
    for(i=0;i<number;i++){
        printf("Id: %d\tName: %s\tFamily name: %s\tAge: %d\t\n",(part+i)->id,(part+i)->name,(part+i)->familyName,(part+i)->age);
    }
}

Participants* sortParticipants(Participants *part, int number){
   
    int i,j;
    int integerSort;

    FILE *fp;
    char *fileName = "zad17_sort.txt";
    fp = fopen(fileName, "wt");
    if (fp == NULL){
        printf("File failed to open\n");
        exit(1);
    }

    for(i=0;i<number;i++){
        for(j=i+1;j<number;j++){
            String temp = (String)malloc(20*sizeof(char));
            if(strcmp(((part+i)->name),(part+j)->name)>0){
                strcpy(temp,(part+i)->name);
                strcpy((part+i)->name,(part+j)->name);
                strcpy((part+j)->name,temp);
                strcpy(temp,(part+i)->familyName);
                strcpy((part+i)->familyName,(part+j)->familyName);
                strcpy((part+j)->familyName,temp);
                integerSort = (part+i)->id;
                (part+i)->id = (part+j)->id;
                (part+j)->id = integerSort;
                integerSort = (part+i)->age;
                (part+i)->age = (part+j)->age;
                (part+j)->age = integerSort;
            }
        }
        fprintf(fp,"ID: %d\tFirst name: %s\tFamily name: %s\tAge: %d\n",
                        (part + i)->id, (part + i)->name, (part + i)->familyName, (part + i)->age);
    }

    fclose(fp);
    fp = NULL;
    return part;
}