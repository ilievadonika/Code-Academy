/*7.1. Използвайте конструкцията if-else if – else за да принтирате
един от 3 възможни отговора.
Press 1 to see message Hello
Press 2 to see Poem
Press 3 to see hidden mesage
В началото, с помощта на функцията printf(), попитайте
ползвателя на вашата програма кое съобщение иска да види,
като натисне 1, 2 или 3 . След това с помощта на функцията
scanf(), запишете неговия избор, след което използвайте if-else if
– else конструкцията, за да принтирате отговора.*/
#include <stdio.h>

int main(void) {
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    int input = 0;
    scanf(" %d", &input);

    if (input == 1) {
        printf("Hello world!\n");
    } else if (input == 2) {
        printf("Mary had a little lamb,\nIts fleece was white as snow;\nAnd everywhere that Mary went\nThe lamb was use to go.\n");
    } else {
        printf("48\n");
    }

    return 0;
}