/*Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/

#include <stdio.h>
#include <stdlib.h>

#define DEBUG 1

#ifdef DEBUG
    /* условна компилация */
    #define DEBUGMSG(msg) printf("DEBUG: %s\n", (msg))
#else
    #define DEBUGMSG(msg) printf("NO DEBUG")
#endif

int main(void){

    DEBUGMSG("Hello");

    return 0;
}