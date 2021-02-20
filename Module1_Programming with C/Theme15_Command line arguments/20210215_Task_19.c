/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char arr[] = "Baba, kaka, mama";
    char *p = &arr;
    int size = strlen(arr);

    printf("The original string is: %s\n", arr);

    for(int i = 0; i < size; i++) {
        if(*p == 'a'){
            *p = 'o';
        }
        p++;
    }

    printf("The new string is: %s\n", arr);
    return 0;
}