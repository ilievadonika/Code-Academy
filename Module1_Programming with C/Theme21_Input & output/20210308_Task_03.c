/*Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char c;
    FILE *pfile = NULL;
    char *filename = "test1.txt";
    pfile = fopen (filename, "r");
    if(pfile == NULL)
        printf("Failed to open %s.\n", filename);

    while((c = fgetc(pfile)) != EOF) {
        printf("%c", c);
    }
    
    fclose(pfile);
    pfile = NULL;
    
    return 0;
}