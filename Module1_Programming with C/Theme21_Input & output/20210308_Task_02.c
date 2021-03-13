/*Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *fopen(const char *restrict name, const char *restrict mode);
    FILE *pfile = NULL;
    char *filename = "text.txt";
    pfile = fopen (filename, "wt");
    if(pfile == NULL)
        printf("Failed to open %s.\n", filename);
    
    /*Продължение: Затворете файла.*/
    fclose (pfile);
    pfile = NULL;
    
    /*Продължение: Преименувайте файла.*/
    //int rename (const char *oldname, const char *newname);
    if(rename ("E:\\Code-Academy\\text.txt",
                "E:\\Code-Academy\\text_copy.txt"))
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");

    /*Продължение: Изтрийте файла.*/
    remove ("text.txt");
    
    return 0;
}