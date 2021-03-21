#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

struct lettersCoding {
    char letter;
    char code[MAX_CODE_LEN]; 
};

struct possibleString {
    int countPossibilities;
    char str[MAX_POSSIB][MAX_STRING_LEN];
};

codeLet *generateLegend(const char *filename) {
    int numLetters = 0;

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
        printf("%c %s", legend[i].letter, legend[i].code); /* Debug */
    }

    fclose(fp);

    return legend;
}

possib *findPossibilities(codeLet *legend) {
    int countPossibilities = 0;
    

}
