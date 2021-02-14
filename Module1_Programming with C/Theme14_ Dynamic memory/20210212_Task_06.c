/*Задача 6.
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* buffer = NULL;
    unsigned uSize = 2;
    char c;
    int i = 0;

    buffer = malloc(uSize * sizeof(int));

    printf("The size of the buffer is: %u\n", uSize);
    printf("Enter your elements(they can be more than the size): ");

    while((c = getchar()) != '\n') {
        if(uSize < i){
            realloc(buffer, uSize * sizeof(char));
        }
        buffer[i] = c;
        i++;
    }

    i = 0;
    
    printf("Your array is:");

    for(i = 0; buffer[i] != '\0'; i++) {
        printf(" %c", *(buffer + i));
    }
    
    free(buffer);

    return 0;
}