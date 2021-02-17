/*Задача 11.
Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getPartisipantData(int* number, char** fn, char** ln, int* age, int size);
void printPartisipantsList(int* number, char** fn, char** ln, int* age, int size);
void freeAll(int* number, char** fn, char** ln, int* age);

int main(void){
    int* numberParticipants = NULL;
    char** firstName = NULL;
    char** lastName = NULL;
    int* age = NULL;
    unsigned uSize;

    printf("Enter number of participants in marathon: ");
    scanf(" %d", &uSize);

    numberParticipants =(int *) malloc(uSize * sizeof(int));
    firstName = (char **)malloc(uSize * sizeof(char));
    lastName = (char **)malloc(uSize * sizeof(char));
    age = (int *)malloc(uSize * sizeof(int));

    getPartisipantData(numberParticipants, firstName, lastName, age, uSize);
    printPartisipantsList(numberParticipants, firstName, lastName, age, uSize);
    freeAll(numberParticipants, firstName, lastName, age);

    return 0;
}
void freeAll(int* number, char** fn, char** ln, int* age) {
    free(number);
    free(fn);
    free(ln);
    free(age);

    return;
}

void printPartisipantsList(int* number, char** fn, char** ln, int* age, int size) {
    printf("Participant data: \n");
    for(int i = 0; i < size; i++) {
        printf("Number: %d ", number[i]);
        printf("First name: %s ", fn[i]);
        printf("Last name: %s ", ln[i]);
        printf("Age: %d \n", age[i]);
    }
    return;
}

void getPartisipantData(int* number, char** fn, char** ln, int* age, int size) {
    int n = 0;
    int stSize;
    char c;
    int j = 0;

    printf("Enter the details about the participants in the marathon:\n");
    for(int i = 0; i < size; i++) { 
        printf("Enter number of participant: ");
        fflush(stdin);
        scanf(" %d", &n);
        number[i] = n;
        printf("Enter first name of participant: ");
        stSize = 2;
        fflush(stdin);
        fn[i] = malloc(stSize*sizeof(fn[0]));
        while ((c = getchar()) != '\n') {
            if(j == stSize - 1) {
                stSize += 2;
                fn = realloc(fn, stSize*sizeof(char));
            }
            fn[i][j] = c;
            j++;
        }
        fn[i][j] = '\0';
        j = 0;
        stSize = 2;
        fflush(stdin);
        printf("Enter last name of participant: ");
        ln[i] = malloc(stSize * sizeof(ln[0]));

        while((c = getchar()) != '\n') {
            if(j == stSize - 1) {
                stSize += 2;
                ln = realloc(fn, stSize*sizeof(char));
            }
            ln[i][j] = c;
            j++;
        }
        ln[i][j] = '\0';
        printf("Enter age of participant: ");
        fflush(stdin);
        scanf(" %d", &n);
        age[i] = n;
    }
    return;
}
