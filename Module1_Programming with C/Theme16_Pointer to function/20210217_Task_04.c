/*Задача 4.
Напишете две функции:
void push(int) (добавя елемент на края на стека) и
int pop() (премахва елемент от края на стека)
за стек с дълбочина 16 (може да се използва масив от 16 елемента от
тип int).
Проверете дали функциите работят коректно във функция main, като
добавите 15 елемента и след това ги извадите от стека и ги изведете на
екрана.*/
#include <stdio.h>

int MAXSIZE = 16;
int stack[16];
int top = -1;

int isempty() {
    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull() {
    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek() {
    return stack[top];
}

int pop() {
    int data;
    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

int push(int data) {
    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

int main(int argc, char **argv) {
    // push items on to the stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);

    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

    // print stack data
    while(!isempty()) {
        int data = pop();
        printf("%d\n",data);
    }

    printf("Stack full: %s\n" , isfull()?"true":"false");
    printf("Stack empty: %s\n" , isempty()?"true":"false");

    return 0;
}

