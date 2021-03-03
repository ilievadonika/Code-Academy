/*Задача 6. Направете по подобен начин триъгълник:*/

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
void printTriangle(char board[row][col], struct Point a, struct Point b);

int main(void) {
    char board[row][col];
    struct Point a = {3, 4};
    struct Point b = {9, 10};

    memset(board, '-', sizeof(board)); 
    printf("This is the original board: \n");
    printBoard(board);
    printf("This is the triangle':\n");
    printTriangle(board, a, b);
    
    
    return 0;
}

void printTriangle(char board[row][col], struct Point a, struct Point b) {
    for(int i = a.x; i <= b.x; i++){
        for(int j = a.y; j <= i; j++){
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