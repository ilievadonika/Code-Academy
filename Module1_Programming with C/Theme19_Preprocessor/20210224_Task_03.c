/*Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)*/

#include <stdio.h>
#include <stdlib.h>

void debugText(const char *pText){

#ifdef DEBUG
    printf("DEBUG: %s\n", pText);
#endif

}

int main(void){
    debugText("Debug");
    return 0;
}