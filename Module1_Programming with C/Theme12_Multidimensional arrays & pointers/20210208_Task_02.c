/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>

int main(void) {
    int arr[5][5];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Input your number for element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your matrix is: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}