/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[10];
    struct Student *pStud;
};

int main(void) {
    struct Student s = {7, "Donika"};
    struct Student sCopy;
    sCopy.pStud = &s;

    printf("\nPrinting student details using the pointer in the structure:\n");
    printf("Id: %d\n",sCopy.pStud->id);
    printf("Family: %s\n",sCopy.pStud->name);

    return 0;
}