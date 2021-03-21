#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include "header.h"

char strArray[SIZE_ARR_1];

int main(void) {
    codeLet *legend = generateLegend("CODE.INP.txt");

    free(legend);

    return 0;
}
