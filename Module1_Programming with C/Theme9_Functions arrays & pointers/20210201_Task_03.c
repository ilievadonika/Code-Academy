/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/
#include <stdio.h>
#include <ctype.h>

double atof(char *s);

int main(void) {
    char s[] = "abcd-123.321";
    printf("%lf\n", atof(s));
    printf("%s", s);

    return 0;
}

double atof(char *s) {
    int i = 0;
    int j = 0;
    int flag = 0;
    double value;
    double power;
    
    for(i = 0; s[i] != '\0'; ++i) {
        while (!((s[i] >= '0' && s[i] <= '9') || s[i] == '.' || s[i] == '\0')) {
            for(j = i; s[j] != '\0'; ++j) {
                s[j] = s[j + 1];
            }
            s[j]='\0';
        }
    }
    if(s[i] == '-') {
        flag = -1;
        i++;
    }else{
        flag = 1;
    }
    
    i = 0;
    for(value= 0.0; s[i] >= '0' && s[i] <= '9'; i++)
        value = 10.0 * value + (s[i] - '0');
    if(s[i] == '.') 
        i++;
    for(power = 1.0; s[i] >= '0' && s[i] <= '9'; i++) {
        value = 10.0 * value + (s[i] - '0');
        power *= 10;
    }
    double result = (value * flag)/ power;
    printf("%c", s[i++]);
    return result;
}