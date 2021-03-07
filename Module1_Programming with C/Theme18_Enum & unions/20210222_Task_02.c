/*Задача 2. Структура от обединение и описател*/

#include <stdio.h>
#include <string.h>

/* value description*/
enum tagEType {VALUE_INT, VALUE_STR};
union tagMyVar {
    int m_nValue;
    char m_szValue[64];
};

struct tagMyValue {
    enum tagEType m_type;
    union tagMyVar m_var;
};

void printValue(struct tagMyValue* pValue);

int main(void) {
    struct tagMyValue value = {VALUE_INT, 12345};
    printValue(&value);
    value.m_type = VALUE_STR;
    strcpy(value.m_var.m_szValue, "test test test");
    printValue(&value);

    return 0;
}

void printValue(struct tagMyValue* pValue) {
    if (VALUE_INT == pValue->m_type) {
        printf("INT: %d\n", pValue->m_var.m_nValue);
    } else if (VALUE_STR == pValue->m_type) {
        printf("STR: %s\n", pValue->m_var.m_szValue);
    }
}