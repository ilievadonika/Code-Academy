#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateSmallNumber(char*, int);
void generateBigNumber(char*, int);
void generateSymbol(char*, int);
void generateNumber(char*, int);

int main(void){

    int l = 0;
    here:
    printf("How long do you want your password to be?\nEnter number:");
    scanf("%d", &l);
    int sL, bL, numbers, symols;
    back1:
    printf("How many small letters do you want?\n");
    scanf("%d", &sL);
    if(sL > l){
        printf("You can't have %d small letters for a password with %d symbols.\n", sL, l);
        goto back1;
    }
    back2:
    printf("How many big letters do you want?\n");
    scanf("%d", &bL);
    if(bL > l - sL){
        printf("Your password is %d long. You've already entered %d small letters. You don't have space for %d big letters.\n", l, l + sL, bL);
        goto back2;
    }
    back3:
    printf("How many numbers do you want?\n");
    scanf("%d", &numbers);
    if(numbers > l - (sL + bL)){
        printf("Your password is %d long. You've already entered %d symbols. You don't have space for %d numbers.\n", l, l + sL + bL, numbers);
        goto back3;
    }
    back4:
    printf("How many symbols do you want?\n");
    scanf("%d", &symols);
    if(symols > l - (sL + bL + numbers)){
        printf("Your password is %d long. You've already entered %d symbols. You don't have space for %d symbols.\n", l, l + sL + bL + numbers, symols);
        goto back4;
    }


    char array[l];

    srand(time(0));

    int flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0;

    for(int i = 0; i <= l-1; i++){
        
        char* p = array;

        int j = rand() % 4;

        if(sL == 0){
            while (j == 0){
              j = rand() % 4;
            }
            
        } else if(bL == 0){
            while (j == 1){
                j = rand() % 4;
            }
        }  else if(numbers == 0){
            while (j == 2){
                 j = rand() % 4;
            }
        } else if(symols == 0){
            while (j == 3){
                j = rand() % 4;
            }
            
        }

        if(j==0 && sL > 0){
            generateSmallNumber(p, i);
            sL--;
        } else if(j == 1 && bL >0){
            generateBigNumber(p, i);
            bL--;
        } else if(j == 2 && symols >0){
            generateSymbol(p, i);
            symols--;
        } else if(j== 3 && numbers > 0){
            generateNumber(p, i);
            numbers--;
        }
        
    
    }

    int answer = 0;
    printf("This could be your new password: %s\nIf you like it press 1.\nIf you want to change it press 2.\n", array);
    scanf("%d", &answer);
    
    if(answer == 2){
        goto here;
    }

    return 0;
}

void generateSmallNumber(char* p, int i){
    int number = 97;
    *(p + i) = rand() % 26 + number; 
}

void generateBigNumber(char* p, int i){
    int number = 65;
    *(p + i) = rand() % 26 + number; 
}
void generateSymbol(char* p, int i){
    int number = 48;
    *(p + i) = rand() % 26 + number; 
}
void generateNumber(char* p, int i){
    int number = 33;
    *(p + i) = rand() % 26 + number; 
}
