#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

char strArray[MAX_STRING_LEN];
int lenStrArray;
int numLetters = 0;

int main(void) {
    codeLet *legend = generateLegend("CODE.INP.txt");
    
    for(int i = 0; i < numLetters; i++) {
        findPosibilities(legend, "", strArray, legend[i]);
    }
    
    free(legend);

    return 0;
}

//a 110b 11c 0d 001
