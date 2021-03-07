/*Задача 1. Дефиниране и инициализация на обединение*/

#include <stdio.h>
#include <stdlib.h>

union tagMyData {
    int m_nValue;
    float m_fValue;
    char m_szText[32];
};

int main(void) {
    union tagMyData data = {13};
    printf("Memory size : sizeof(data) : %d\n", sizeof(data));
    printf("nValue: %d, fValue: %f, Text: %s\n", data.m_nValue,
    data.m_fValue, data.m_szText);

    return 0;
}