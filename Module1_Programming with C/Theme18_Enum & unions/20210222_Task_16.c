/*Задача 16.
Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs*/

#include <stdio.h>
#include <stdlib.h>

enum state {one = 1,two = 2,three = 3,four = 4,five = 5, six = 6, seven = 7, eight = 8, nine = 9, ten = 10, eleven = 11, twelve = 12, thirteen = 13, fourteen = 14,
fifteen = 15, sixteen = 16, seventeen = 17, eighteen = 18, nineteen = 19, twenty = 20};

struct variables{

    int i;
    char text[10];
    double d;
    enum state e;

};

int readFromFile(struct variables array[],char const *fileName);
void printArrayInConsole(struct variables array[]);

int main(void){

    struct variables var[20];
    if(readFromFile(var,"structs20.cvs") == 0){
        printf("Successfully read from file\n");
    }
    else{
        printf("Failed to read from file\n");
    }
    printArrayInConsole(var);

    return 0;
}

int readFromFile(struct variables array[],char const *fileName){

    int i;
    FILE *fp;
    fp = fopen(fileName,"r");

    for(i=0;i<20;i++){
        fscanf(fp,"%d%*c %s%*c %lf%*c %d%*c\n",&array[i].i, &array[i].text, &array[i].d, &array[i].e);
    }

    fclose(fp);
    return 0;
}

void printArrayInConsole(struct variables array[]){
    for(int i = 0; i < 20 ; i++){
        printf("%d, %s %lf, %d\n",(array+i)->i, (array+i)->text, (array+i)->d, (array+i)->e);
    }

}