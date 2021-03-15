/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    char fname[20];
    char c;
    char brackets[6] = "{}[]()";
    int bracketCounts[6] = {0};
    char * found;
    int i;

    printf("Please enter the destination of the file: \n");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL){
        printf("Problem opening file!\n");
        return 0;
    }

    printf("File opened correctly\n");

    // counting various parentheses
    while ((c = getc(fp)) != EOF){
        found = strchr(brackets, c);
        if (found != NULL) {
            bracketCounts[found - brackets]++;
        }
    }

    fclose(fp);

    // checking parentheses counters
    for (i = 0;i < 6;i += 2) {
        if (bracketCounts[i] != bracketCounts[i+1]) {
            printf("Unbalanced parentheses !\n");
            return 0;
        }
    }

    printf("All parentheses are OK!\n");

    return 0;
}