/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include <stdio.h>
#include <string.h>

int atoi(char *str);
void itoa(int n, char *str);
void reverse(char *str);
int atof(char *str);

int main(void) {
    char s[] = {"234"};
    char t[10];
    int n = 24;

    printf("%d\n", atoi(s));
    itoa(n, t);
    reverse(t);
    printf("%s", t);

    return 0;
}
void itoa(int n, char *str) {
    int sign;

	if((sign = n) < 0)	/* record sign */
		n = -n;			/* make n positive */

	do {				
		*str = n % 10 + '0'; 
        str++;	
	} while((n /= 10) > 0);		/* delete it */
	*str = '\0';

	reverse(str);
    
    return;
}

void reverse(char *str) {
   int length, c;
   char *begin, *end, temp;
 
   length = strlen(str);
 
   begin = str;
   end = str;
 
   for (c = 0 ;c < (length - 1);c++)
      end++;
 
   for (c = 0 ; c < length/2; c++) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
   return;
}

int atoi(char *str) {
    int res = 0;
    
    while(*str){
        res = res * 10 + *str - '0';
        str++;
    } //234
    return res;
}