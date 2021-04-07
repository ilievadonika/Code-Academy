#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

codeLet *generateLegend(const char *filename) {

    FILE *fp;
    fp = fopen("CODE.INP.txt", "r");

    if(fp == NULL) {
        perror("Error opening the file!");
        exit(1);
    }
    
    fscanf(fp, "%s", strArray);
    
    if(fgetc(fp) != '\n') {
        printf("Bad formatting!");
        exit(1);
    }

    fscanf(fp, "%d", &numLetters);

    if(fgetc(fp) != '\n') {
        printf("Bad formatting!");
        exit(1);
    }

    codeLet *legend = (codeLet *) malloc(numLetters * sizeof(codeLet));

    for (int i = 0; i < numLetters; i++) {
        fscanf(fp, "%c %s\n", &((legend + i)->letter), (legend + i)->code);
        /*printf("%c %s", legend[i].letter, legend[i].code);*/  /*Debug */
    }

    fclose(fp);

    return legend;
}

void findPosibilities(codeLet *legend, char *decodedLetters, char *leftToDecode, codeLet letterToCheck) {
    FILE *fp = fopen("CODE.OUT.txt", "a");
    char tempDecodedLet[MAX_STRING_LEN];
    strcpy(tempDecodedLet, decodedLetters);

    if(strncmp(leftToDecode, letterToCheck.code, strlen(letterToCheck.code)) == 0) {
        int len = strlen(tempDecodedLet);
        tempDecodedLet[len] = letterToCheck.letter;
        tempDecodedLet[len + 1] = '\0';
        leftToDecode += strlen(letterToCheck.code);

        if(*leftToDecode == '\0') {
            strcpy(possibilities.strings[possibilities.count], tempDecodedLet);
            /*printf("%s\n", possibilities.strings[possibilities.count]);*/ /*Debug*/
            fprintf(fp, "%s\n", possibilities.strings[possibilities.count]);
            possibilities.count++;
            return;
        }

        for(int i = 0; i < numLetters; i++) {
            findPosibilities(legend, tempDecodedLet, leftToDecode, legend[i]);
        }
    }
    fclose(fp);
    fp = NULL;
    return;
}
