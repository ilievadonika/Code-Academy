/*Задача 9. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа.*/
#include <stdio.h>
#include <string.h>

void itoa(int n, char s[ ]);
void reverse(char s[]);

int main(void) {
    char arr[10];
    int number = 123;

    itoa(number, arr);
	printf("Symbols in the array: \"%s\"\n", arr);

    return 0;
}

void reverse(char s[]) {
	int c,i,j;

	for(i = 0,j = strlen(s)-1; i < j; i++,j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
    return;
}

void itoa(int n, char s[ ]) {
    int i,sign;

	if((sign = n) < 0)	/* record sign */
		n = -n;			/* make n positive */

	i = 0;

	do {						/* generate digits in reverse order */
		s[i++] = n % 10 + '0'; 	/* get next digit */
	} while((n /= 10) > 0);		/* delete it */

	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
    return;
}