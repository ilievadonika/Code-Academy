/*Задача 3.
Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elements{
    int quantity;
    char product[128];
    float price;
};

void printElements(struct elements el);

int main(void){

    struct elements shop;

    shop.price = 2.50;
    strcpy(shop.product,"chocolate");
    shop.quantity = 50;
    printElements(shop);

    return 0;
}

void printElements(struct elements el){

    printf("Quantity: %d\n",el.quantity);
    printf("Product name: %s\n",el.product);
    printf("Product price: %.2f\n",el.price);
}