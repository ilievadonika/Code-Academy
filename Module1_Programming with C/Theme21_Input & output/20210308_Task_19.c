/*Задача 19:
Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int count;
    char c;

    FILE *fp;
    if(argc < 2){
	    for(count = 0; count < argc; count++){
	        printf("argv[%2d]: %s\n", count, argv[count]);
        }
    } else{
        for(count = 1; count < argc; count++){
            fp = fopen(argv[count], "r");

            if(fp == NULL){
                printf("Error oppening file!\n");
                exit(1);
            }
            c = fgetc(fp);
            while (c != EOF){
                printf("%c",c);
                c = fgetc(fp);
            }
            printf("\n");

            fclose(fp);
            fp = NULL;
        }
    }

    return 0;
}