/*зад.4  Да се състави програма, с помощта на която 2
(1, 3) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F*/

#include <stdio.h>
#include <stdlib.h>

#define ROW 7
#define COLUMN 7

char board[ROW][COLUMN] = {
    {'3','3','2','4','3','1','2'},
    {'2','4','2','3','2','4','3'},
    {'4','2','3','2','4','2','1'},
    {'4','4','1','2','2','3','4'},
    {'3','2','3','3','4','2','2'},
    {'3','2','4','2','3','2','1'},
    {'1','1','3','3','4','2','F'}
                        };

typedef struct coordinates{
    int x;
    int y;
}coordinates;

typedef struct player{
    char name;
    coordinates move;
    coordinates lastMove;
    int lastCount;
    int lastChoice;
}player;

int userChoice = 0;

void menu();
void printBoard(char arr[][COLUMN], player *fplayer, player *splayer);
void move(int userChoice, player *currentPlayer, int pcounter); 
void win(player *currentPlayer);
void lose(player *currentPlayer, player *otherPlayer);

int main(void) {
    player firstPlayer = {'#', {0,0}, {0,0}};
    player secondPlayer = {'$', {0,0}, {0,0}};
    
    int positionCounterP1;
    int positionCounterP2; 
    int curPlayer = 1;

    printf("Welcome to the game!\n");
    do{
        printBoard(board, &firstPlayer, &secondPlayer);
        menu();
        
        printf("Player %d: ", curPlayer);
        scanf(" %d", &userChoice);
        
        if(curPlayer == 1) {
            positionCounterP1 = (int) board[firstPlayer.move.y][firstPlayer.move.x] - '0';
            move(userChoice, &firstPlayer, positionCounterP1);
            win(&firstPlayer);
            lose(&firstPlayer, &secondPlayer);
            curPlayer = 2;
        } else{
            positionCounterP2 = (int) board[secondPlayer.move.y][secondPlayer.move.x] - '0';
            move(userChoice, &secondPlayer, positionCounterP2);
            win(&secondPlayer);
            lose(&secondPlayer, &firstPlayer);
            curPlayer = 1;
        }
        
    } while (1);

    return 0;
}

void lose(player *currentPlayer, player *otherPlayer) {
    if((currentPlayer->move.y > ROW - 1) || ( currentPlayer->move.y < 0) || 
        (currentPlayer->move.x > COLUMN - 1) || (currentPlayer->move.x < 0)){
        printf("Player %c WINS! \nWeeeeee are the champions my friend!!!!", otherPlayer->name);
        exit(1);
    }
    return;
}

void win(player *currentPlayer) {
    if((currentPlayer->move.y == ROW - 1) && (currentPlayer->move.x == COLUMN - 1)){
        printf("Player %c WINS! \nWeeeeee are the champions my friend!!!!", currentPlayer->name);
        exit(1);
    }
    return;
}
void move(int userChoice, player *currentPlayer, int pcounter) {
    switch(userChoice) {
            case 1: 
                currentPlayer->move.y = currentPlayer->move.y - pcounter; 
                currentPlayer->lastChoice = userChoice;
                currentPlayer->lastCount = pcounter;
                break;
            case 2:
                currentPlayer->move.y = currentPlayer->move.y + pcounter;
                currentPlayer->lastChoice = userChoice;
                currentPlayer->lastCount = pcounter;
                break;
            case 3:
                currentPlayer->move.x = currentPlayer->move.x + pcounter;
                currentPlayer->lastChoice = userChoice;
                currentPlayer->lastCount = pcounter;
                break;
            case 4:
                currentPlayer->move.x = currentPlayer->move.x - pcounter;
                currentPlayer->lastChoice = userChoice;
                currentPlayer->lastCount = pcounter;
                break;
            case 5:
                if(currentPlayer->lastChoice == 1) {
                    currentPlayer->move.y = currentPlayer->move.y + currentPlayer->lastCount;
                } else if(currentPlayer->lastChoice == 2) {
                    currentPlayer->move.y = currentPlayer->move.y - currentPlayer->lastCount;
                } else if(currentPlayer->lastChoice == 3) {
                    currentPlayer->move.x = currentPlayer->move.x - currentPlayer->lastCount;
                } else if(currentPlayer->lastChoice == 4) {
                    currentPlayer->move.x = currentPlayer->move.x + currentPlayer->lastCount;
                }
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    return;
}

void menu(){
    printf("\nIn wich destination you want to move?\n");
    printf("Type 1 to move up\n");
    printf("Type 2 to move down\n");
    printf("Type 3 to move right\n");
    printf("Type 4 to move left.\n");
    printf("Type 5 to retun your move.\n");
    return;
}

void printBoard(char arr[][COLUMN], player *fplayer, player *splayer) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            if((fplayer->move.y == i) && (fplayer->move.x == j)){
                printf("%c", fplayer->name);
            }
            else{
                printf(" ");
            }
            printf("%c", arr[i][j]);

            if((splayer->move.y == i) && (splayer->move.x == j)){
                printf("%c",splayer->name);
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return;
}