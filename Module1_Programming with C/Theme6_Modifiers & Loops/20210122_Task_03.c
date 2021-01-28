/*Задача 7.3. Пренапишете предишното упражнение като
вмъкнете конструкцията switch-case в един цикъл while(), така
че питането да се повтаря, докато потребителят не въведе
числото 4, което е поставено в питането за изход от програмата .
Така се създават менюта за изпълнение на програма на С.*/
#include <stdio.h>

int main(void) {

    int input = 0;

    while (input != 4) {
        printf("Press 1 to see message Hello\n");
        printf("Press 2 to see Poem\n");
        printf("Press 3 to see hidden message\n");
        printf("Press 4 to exit\n");

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
        default :
            printf("Press 1, 2, 3 or 4\n");
            break;
        }
    }
    printf("Goodbye!");

    return 0;
}