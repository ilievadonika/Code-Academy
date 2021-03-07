/*Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/

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
union var convertType(union var *variable,enum type *varType);

int main(void){

    union var integer;
    integer.i = 14;
    enum type intType;
    intType = VALUE_INT;
    checkValue(integer,intType);

    union var result;
    result = convertType(&integer,&intType);
    checkValue(result,intType);

    union var text;
    strcpy(text.text,"1245he");
    enum type textType;
    textType = VALUE_STR;
    checkValue(text,textType);
    
    union var textResult;
    textResult = convertType(&text,&textType);
    checkValue(textResult,textType);

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

union var convertType(union var *variable,enum type *varType){

    union var result;

    if(*varType == VALUE_INT){
        printf("Converting the variable to string\n");
        itoa(variable->i,result.text,10);
        *varType = VALUE_STR;
        
        return result;
    }
    else if(*varType == VALUE_STR){

        printf("Converting the variable to an integer\n");
        result.i = atoi(variable->text);
        *varType = VALUE_INT;
        
        return result;
    }

}