/*Задача 12.
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1)*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct bitStruct{
    short int si: 3;
    char c: 6;
};

struct bitStruct1{
    char c1;
    char c2;
    short int si1;
    short int si2;
};

void printElements(struct bitStruct test);

int main(void){

    struct bitStruct bitTest;
    bitTest.si = 7; /* Не се принтира 7, поради недостиг на bits */
    bitTest.c = 'c'; /* Променя стойноста от 99 (c) до -29 (y) */
    printElements(bitTest);
    printf("Size of bitStruct: %d\n",sizeof(bitTest)); /*структурата е 3 бита*/

    struct bitStruct1 bitTest1;
    printf("Size of bitStruct1 with four types: %d\n",sizeof(bitTest1)); /*увеличава сe s 3 бита, когато са подредени*/

    return 0;
}

void printElements(struct bitStruct test){
    printf("Short int: %hu\n",test.si);
    printf("Char: %c\n",test.c);
}