/*Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 64

union var{
    int i;
    char text[size];
};

enum type{
    VALUE_INT,
    VALUE_STR
};

void checkValue(union var variable,enum type varType);

int main(void){

    union var integer;
    integer.i = 4;
    enum type integerType;
    integerType = VALUE_INT;
    checkValue(integer,integerType);

    union var text;
    strcpy(text.text,"Hello");
    enum type textType;
    textType = VALUE_STR;
    checkValue(text,textType);

    return 0;
}

void checkValue(union var variable,enum type varType){

    if(varType == VALUE_INT){
        printf("The variable is integer: %d\n",variable.i);
    }
    else if(varType == VALUE_STR){
        printf("The variable is string: %s\n",variable.text);
    }
    
}
