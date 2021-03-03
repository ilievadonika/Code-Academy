/*Задача 1. Дефиниране на структура, достъп до членове*/
#include <stdio.h>
#include <string.h>

struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

int main(void) {
    struct tagPaper stPaper;
    stPaper.m_nBookId = 123456;

    strcpy(stPaper.m_szTitle, "Paper title");
    strcpy(stPaper.m_szAuthor, "Autor");
    strcpy(stPaper.m_szSubject, "paper subject");

    printf("Paper id : %d\n", stPaper.m_nBookId);
    printf("Paper title : %s\n", stPaper.m_szTitle);
    printf("Paper author : %s\n", stPaper.m_szAuthor);
    printf("Paper subject : %s\n", stPaper.m_szSubject);

    return 0;
}