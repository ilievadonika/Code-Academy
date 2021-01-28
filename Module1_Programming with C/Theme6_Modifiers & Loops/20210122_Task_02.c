/* Задача 7.2. Пренапишете предишното упражнение като вместо 
ifelse-if конструкцията използвайте switch-case .*/
#include <stdio.h>

int main(void) {
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int input = 0;
    scanf(" %d", &input);
    
    switch (input) {
        case 1:
            printf("Hello world!\n");
            break;
        case 2:
            printf("Mary had a little lamb,\nIts fleece was white as snow;\nAnd everywhere that Mary went\nThe lamb was use to go.\n");
            break;
        case 3:
            printf("48\n");
            break;
    }

    return 0;
}