/*Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int row = 3,col = 8;

int board[3][8] = {         {45,45,45,45,45,45,45,45},
                            {9,10,11,12,13,14,15,16},
                            {1,2,3,4,5,6,7,8}
};

void menu();
void printBoard();
int checkMove(int board[][col],int move,int number);
void makeMove(int board[][col],int move,int number);

int main(void){

    menu();

    return 0;
}

void printBoard(){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(board[i][j] == 45){
            printf("%c\t",board[i][j]);
            }
            else{
            printf("%d\t",board[i][j]);
            }
        }
        printf("\n");
    }

}

void menu(){

    int choice,number,move,validMove,i,j;

    menu:
    printBoard(board);
    printf("Menu\n");
    printf("1.Make a turn\n");
    printf("2.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the number you would like to move to: \n");
        scanf("%d",&number);
        move:
        printf("Choose a way to move:\n");
        printf("1.Up\n");
        printf("2.Down\n");
        printf("3.Left\n");
        printf("4.Right\n");
        printf("5.Return to menu\n");
        scanf("%d",&move);
        switch(move){
            case 1:
            validMove = checkMove(board,move,number);
            if(validMove == 1){
                makeMove(board,move,number);
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;

            case 2:
            validMove = checkMove(board,move,number);
            if(validMove == 1){
                makeMove(board,move,number);
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;

            case 3:
            validMove = checkMove(board,move,number);
            if(validMove == 1){
                makeMove(board,move,number);
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;

            case 4:
            validMove = checkMove(board,move,number);
            if(validMove == 1){
                makeMove(board,move,number);
            }
            else{
                printf("Invalid move\n");
                goto move;
            }
            goto menu;
            break;

            case 5:
            goto menu;
            break;

        }

        case 2:
        printf("Thank you for playing\n");
        exit(0);
        break;
    }

}

int checkMove(int board[][col],int move,int number){

    int i,j;
    int iPosition,jPosition;

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(board[i][j] == number){
                iPosition = i;
                jPosition = j;
            }
        }
    }

    if(move == 1){
        if(board[iPosition-1][jPosition] != 45 && i >= 0){
            if(board[iPosition-2][jPosition] == 45 && i >= 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

    if(move == 2){
        if(board[iPosition+1][jPosition] != 45 && i <= row){
            if(board[iPosition+2][jPosition] == 45 && i<= row){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

    if(move == 3){
        if(board[iPosition][jPosition-1] != 45 && j >= 0){
            if(board[iPosition][jPosition-2] == 45 && j>=0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

    if(move == 4){
        if(board[iPosition][jPosition+1] != 45 && j <= col){
            if(board[iPosition][jPosition+2] == 45 && j<=col){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }

}

void makeMove(int board[][col],int move,int number){
    
    static int oldBoard[3][8];
    int i,j,validMove,choice;
    int iPosition,jPosition;

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(board[i][j] == number){
                iPosition = i;
                jPosition = j;
            }
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
             oldBoard[i][j] = board[i][j];
        }
    }

    if(move == 1){
        validMove = checkMove(board,move,number);
        if(validMove == 1){
            if(board[iPosition-1][jPosition] != 45 && i>=0){
                if(board[iPosition-2][jPosition] == 45 && i>=0){
                    board[iPosition-2][jPosition] = board[iPosition][jPosition];
                    board[iPosition-1][jPosition] = 45;
                    board[iPosition][jPosition] = 45;
                }
            }
        }
    }

    if(move == 2){
        validMove = checkMove(board,move,number);
        if(validMove == 1){
            if(board[iPosition+1][jPosition] != 45 && i>=0){
                if(board[iPosition+2][jPosition] == 45 && i>=0){
                    board[iPosition+2][jPosition] = board[iPosition][jPosition];
                    board[iPosition+1][jPosition] = 45;
                    board[iPosition][jPosition] = 45;
                }
            }
        }
    }

    if(move == 3){
        validMove = checkMove(board,move,number);
        if(validMove == 1){
            if(board[iPosition][jPosition-1] != 45 && i>=0){
                if(board[iPosition][jPosition-2] == 45 && i>=0){
                    board[iPosition][jPosition-2] = board[iPosition][jPosition];
                    board[iPosition][jPosition-1] = 45;
                    board[iPosition][jPosition] = 45;
                }
            }
        }
    }

    if(move == 4){
        validMove = checkMove(board,move,number);
        if(validMove == 1){
            if(board[iPosition][jPosition+1] != 45 && i>=0){
                if(board[iPosition][jPosition+2] == 45 && i>=0){
                    board[iPosition][jPosition+2] = board[iPosition][jPosition];
                    board[iPosition][jPosition+1] = 45;
                    board[iPosition][jPosition] = 45;
                }
            }
        }
    }

    printBoard(board);
    printf("Do you want to rewind your move? - Press 1 for yes or 2 for now\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                board[i][j] = oldBoard[i][j];
            }
        }
        break;

        case 2:
        break;
    }

}