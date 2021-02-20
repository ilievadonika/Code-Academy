/*Решете задачата за генериране на 6 буквена парола с
пойнтери*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void passGenerator(char *arr);

int main(int argc, char **argv) {
    char pass[6];
    int userInput = 0;

    printf("To generate a six-character password press enter: ");
    getchar();

    do{ 
        passGenerator(pass);
        printf("If you want to try one more time press 1.\n");
        printf("If you like your pass press 2.\n");
        scanf("%d", &userInput);
    } while(userInput != 2);
    
    printf("Enjoy your password!");

    return 0;
}

void passGenerator(char *arr){
    srand((unsigned int)(time(NULL)));
    int i;

    for (i = 0; i < 3; i++) {
        char capLetter = 'A' + (rand() % 26);
        arr[i] = capLetter;
        char letter = 'a' + (rand() % 26);
        arr[i + 2] = letter;
        printf("%c%c", arr[i], arr[i + 2]);
    }
    printf("\n");
