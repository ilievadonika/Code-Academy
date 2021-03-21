#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include "header.h"

char strArray[MAX_STRING_LEN];

int main(void) {
    codeLet *legend = generateLegend("CODE.INP.txt");

    free(legend);

    return 0;
}
