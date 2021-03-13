/*Задача 5
Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE* fpIn = NULL;
    FILE* fpOut = NULL;

    if(argc < 3) {
        printf("\nUsage:\n > %s in.txt out.txt\n\n", argv[0]);
    } else {
        fpIn = fopen(argv[1], "r");
        fpOut = fopen(argv[2], "w"); 
    }
    if(NULL != fpIn && NULL != fpOut) {
        for(;;) {
        int nValue = 0;
        fscanf(fpIn, " %d", &nValue);
        if (feof(fpIn)){
            break;
        }
        fprintf(fpOut, "%d ", nValue);
        }
    } else if (argc >= 3) {
        fprintf(stderr, "\nFailed to open IN/OUT files\n");
    }

    if (NULL != fpIn) fclose(fpIn);
    if (NULL != fpOut) fclose(fpOut);

    return 0;
}