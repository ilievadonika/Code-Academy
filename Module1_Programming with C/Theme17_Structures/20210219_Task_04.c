/*Задача 4. Подравняване и пакетиране на структури*/

#include <stdio.h>

struct tagTestA {
    char m_ch;
    short int m_si;
};

struct tagTestAP {
    char m_ch;
    short int m_si;
} __attribute__((packed));

int main(void) {
    printf("\nsizeof(A) = %d, sizeof(A-packed) = %d\n", sizeof(struct tagTestA), sizeof(struct tagTestAP));
    
    return 0;
} 