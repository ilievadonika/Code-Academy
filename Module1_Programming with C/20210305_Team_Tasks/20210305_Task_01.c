/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Materials{
    int countLPlank;
    int countSPlank;
    int countSBracket;
    int countBBracket;
    int countScrew;
}materials;

void menu(materials *warehouse);
int countShelfs(int *pshelfs, materials *warehouse, materials *needed);

int main(void){
    int shelfs[5];
    int *pshelfs = &shelfs;

    materials *needed = (materials*)malloc(sizeof(materials));
    materials *warehouse = (materials*)malloc(sizeof(materials));

    needed->countLPlank = 4;
    needed->countSPlank = 6;
    needed->countSBracket = 12;
    needed->countBBracket = 2;
    needed->countScrew = 14;

    menu(warehouse);
    printf("The shelfs you can build with this materials are: %d", countShelfs(pshelfs, warehouse, needed));

    return 0;
}

int countShelfs(int *pshelfs, materials *warehouse, materials *needed) {
    int count = 0;
    int temp = 0;
    int size = sizeof(pshelfs)/sizeof(pshelfs[0]);

    int countLP = warehouse->countLPlank / needed->countLPlank; 
    int countSP = warehouse->countSPlank / needed->countSPlank;
    int countSB = warehouse->countSBracket / needed->countSBracket;
    int countBB = warehouse->countBBracket / needed->countBBracket;
    int countS = warehouse->countScrew / needed->countScrew;

    pshelfs[0] = countLP;
    pshelfs[1] = countSP;
    pshelfs[2] = countSB;
    pshelfs[3] = countBB;
    pshelfs[4] = countS;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++) {
            if(pshelfs[j] < pshelfs[i]) {
                temp = pshelfs[i];
                pshelfs[i] = pshelfs[j];
                pshelfs[j] = temp;
            }
        }
    }
    count = pshelfs[4];

    return count;
}

void menu(materials *warehouse) {
    printf("\nWe are going to count how many materials we have in the warehouse: \n");
    printf("How many long planks we have: \n");
    scanf(" %d", &warehouse->countLPlank);
    printf("How many short planks we have: \n");
    scanf(" %d", &(warehouse->countSPlank));
    printf("How many small brackets we have: \n");
    scanf(" %d", &(warehouse->countSBracket));
    printf("How many big brackets we have: \n");
    scanf(" %d", &(warehouse->countBBracket));
    printf("How many screws we have: \n");
    scanf(" %d", &(warehouse->countScrew));
    printf("Thank you for counting!\n\n");

    return;
}

