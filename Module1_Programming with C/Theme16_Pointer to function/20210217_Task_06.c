/*Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";
*/
#include <stdio.h>
#include <string.h>

int countLetters(char *p);

int main(int argc, char **argv) {
    char arr[1000] = {0};
    char c;
    int i = 0;
    
    printf("Enter a message/text: ");

    while ((c = getchar()) != '\n'){
        arr[i++] = c;
    }

    int length = strlen(arr);
    char *p = arr;
    int (*res)(char *) = countLetters;

    printf("Count of 'a' in the string is: %d", res(p));

    return 0;
}

int countLetters(char *p){
    int counter = 0;
    char charA = 'a';

    while (*p) {
       if(*p == charA)
            counter++;
            p++;
    }
    
    return counter;
}
