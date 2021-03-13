/*Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12
2 21
3 31
4 40
5 49
6 58
7 69
8 79
9 90
10 101
Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147*/

#include <stdio.h>
#include <stdlib.h>
#define size 100
#define number 10

void splitNumber(int n, int numberArray[number]);

int main(void){

    FILE *fin;
    char *fileName = "zad20_input.txt";
    fin = fopen(fileName,"r");
    if (fin == NULL){
        perror("File failed to open\n");
        exit(1);
    } 

    char *numberString = (char*)malloc(size*sizeof(char));
    int lineCounter = 0,i;
    char ch;
    int numArray[number];

    printf("Prices for km: \n");
    for(i = 0; i < number; i++){
        fscanf(fin,"%d", &numArray[i]);
        printf("%d\t" ,numArray[i]);
    }
    printf("\n");

    rewind(fin);
    ch = fgetc(fin);
    while(ch != EOF){
        if(1 == lineCounter)
            fscanf(fin,"%[^\n]s", numberString);
            ch = fgetc(fin);
        if(ch == '\n'){
            lineCounter++;
        }
    }

    int n = atoi(numberString);
    printf("Destination in km is: %d \n",n);

    FILE *fout;
    char *fileNameOut = "zad20_output.txt";
    fout = fopen(fileNameOut,"w");
    if (fout == NULL){
        printf("File failed to open\n");
        exit(1);
    } 

    int j,k,l;
    int sum = 0;

    for (i = 1; i < 10; i++){
        for (j = i; j < 10; j++) 
            for (k = j; k < 10; k++) 
                for (l = k; l < 10; l++) 
                    if (i + j + k + l == n){
                        fprintf(fout,"%d\t %d\n",i,numArray[i]);
                        fprintf(fout,"%d\t %d\n",j,numArray[j]);
                        fprintf(fout,"%d\t %d\n",k,numArray[k]);
                        fprintf(fout,"%d\t %d\n",l,numArray[l]);
                        sum = numArray[i] + numArray[j] + numArray[k] + numArray[l];
                        fprintf(fout,"%d",sum);
                        goto finish;
                    }
    }

    finish:
    printf("Found the optimal destination path!\n");
    fclose(fout);
    fout = NULL;
    fclose(fin);
    fin = NULL;
    return 0;
}