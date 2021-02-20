/*Задача 13: Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());
*/
#include <stdio.h>

int main(int argc, char **argv) {
    char arr[] = "I love C programming.";
    char *p = arr;
    int length = 0;

    while(*p){
        p++;
        length++;
    }

    printf("This string is: '%s'\n", arr);
    printf("String length is: %d", length);
    
    return 0;
}