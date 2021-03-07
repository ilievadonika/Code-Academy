/*Задача 8.
Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void)*/

#include <stdio.h>
#include <stdlib.h>
#define size 16

int stack[size];
int flag = -1;

struct Stack{
    int *contents;
    int top;
};

int pop();
void push(int data);
int top();
int isFull();
int isEmpty();

int main(void){
    
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    printf("Element at top of the stack: %d\n", top());
    printf("Elements: \n");
    while (!isEmpty()){
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull() ? "true" : "false");
    printf("Stack empty: %s\n", isEmpty() ? "true" : "false");

    return 0;
}

int pop(){

    int data;
    if(isEmpty() != 1){
        data = stack[flag];
        flag = flag - 1;
        return data;
    }
    else{
        printf("Stack is empty.\n");
    }
    
}

void push(int data){

    if(isFull() != 1){
        flag = flag + 1;
        stack[flag] = data;
    }
    else{
        printf("Stack is full\n");
    }

}

int top(){
    return stack[flag];
}


int isFull(){
    if(flag == size){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(flag == -1){
        return 1;
    }
    else{
        return 0;
    }
}