/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/
#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void) {
    char s[10];
    int num = 0;
    int base = 0;
    printf("Input you number: ");
    scanf("%d", &num);
    printf("Input base: ");
    scanf("%d", &base);
    itob(num, s, base);
    printf("Decimal %d in base %-2d = %s\n", num, base, s);
    
    return 0;
}

void itob(int n, char s[], int b) {
    static char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, sign;
    
    if (b < 2 || b > 36) {
        printf("Cannot support base %d\n", b);
    }
    
    if ((sign = n) < 0)
        n = -n;
    i = 0;

    do {
        s[i++] = digits[n % b];
    } while ((n /= b) > 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    
    reverse(s);
    return;
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
