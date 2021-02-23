/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generateSmallNumber(char*, int);
void generateBigNumber(char*, int);
void generateSymbol(char*, int);
void generateNumber(char*, int);
void generatePass(char *p);

int main(int argc, char **argv){
    char pass[10];
    char *p = &pass;
    
    void(*gp)(char *) = generatePass;
    gp(p);

    printf("\nYour random generated password is:\n%s\n", pass);

    return 0;
}

void generatePass(char *p) {
    srand(time(0));
    for(int i = 0; i <= 20; i++){
        int j = rand() % 4;
        if(j == 0){
            generateSmallNumber(p, i);
        } else if(j == 1){
            generateBigNumber(p, i);
        } else if(j == 2){
            generateSymbol(p, i);
        } else{
            generateNumber(p, i);
        }
    }
}

void generateSmallNumber(char* p, int i){
    int number = 97;
    *(p + i) = rand() % 26 + number; 
}

void generateBigNumber(char* p, int i){
    int number = 65;
    *(p + i) = rand() % 26 + number; 
}
void generateSymbol(char* p, int i){
    int number = 48;
    *(p + i) = rand() % 26 + number; 
}
void generateNumber(char* p, int i){
    int number = 33;
    *(p + i) = rand() % 26 + number; 
}