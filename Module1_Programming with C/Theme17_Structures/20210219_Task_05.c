/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int row = 15;
static int col = 15;

struct Point{
    int x;
    int y;
};

void printBoard(char board[row][col]);
void printPoint(char board[row][col], struct Point p);
void printRectangle(char board[row][col], struct Point p, struct Point pi);

int main(void) {
    char board[row][col];
    struct Point a = {3, 4};
    struct Point b = {7, 10};

    memset(board, '-', sizeof(board)); 
    printf("This is the original board: \n");
    printBoard(board);
    printf("This is the board after a(3, 4) = '@':\n");
    printPoint(board, a);
    printf("This is the board after b(7, 10) = '@':\n");
    printPoint(board, b);
    printf("This is the rectangle:\n");
    printRectangle(board, a, b);
    
    return 0;
}

void printRectangle(char board[row][col], struct Point p, struct Point pi) {
    for(int i = p.x; i <= pi.x; i++){
        for(int j = p.y; j <= pi.y; j++){
            board[i][j] = '@';
        }
    }
    printBoard(board);
}

void printPoint(char board[row][col], struct Point p){
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == p.x && j== p.y) {
                board[i][j] = '@';
            }
        }
    }
    printBoard(board);
}

void printBoard(char board[row][col]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}