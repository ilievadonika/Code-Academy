#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

float *readData(size_t *sensorCount) {
    scanf("%lu\n", sensorCount);
    float *data = (float *) malloc(sizeof(float) * (*sensorCount));
    
    if (data == NULL) {
        fprintf(stderr, "Error in %s: %s\n", __func__, strerror(errno));
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < *sensorCount; i++) {
        if (scanf("%f ", data + i) != 1) {
            fprintf(stderr, "Error in %s: Invalid input in scanf()\n", __func__);
            exit(EXIT_FAILURE);
        }
    }

    return data;
}

int controlValueC(int n, int *weights) {
    int C = 0;
    for (int i = 1; i <= n; i++) {
        C += ((n - i) % 10 + 1) * weights[i - 1]; 
    }
    C %= 11;

    return C;
}

int controlValueK(int n, int *weights) {
    int K = 0;
    for (int i = 1; i <= n + 1; i++) {
        K += ((n - i + 1) % 9 + 1) * weights[i - 1]; 
    }
    K %= 11;
    
    return K;
}

