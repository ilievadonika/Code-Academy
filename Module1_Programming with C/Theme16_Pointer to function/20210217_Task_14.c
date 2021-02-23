/*
Задача 14.
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.
*/

#include <stdio.h>
#include <string.h>

void converttoLowercase(char[]);
void Arraysort(char[]);

int main (){
    char string1[] = "Papaja", string2[] = "japaPa";
    int a1, b = 0;

if(strlen(string1) != strlen(string2)){
    printf("The strings are not anagram");
return 0;
}else {
converttoLowercase(string1);
converttoLowercase(string2);
Arraysort(string1);
Arraysort(string2);
for(a1 = 0; a1 < strlen(string1); a1++) {
    if(string1[a1] != string2[a1]) {
    printf("The strings are not anagram");
    return 0;
    }
}
    printf("The strings are anagram");
}
    return 0;
}


void converttoLowercase(char a[]){
    int c;
    for(c = 0; c < strlen(a)-1; c++){
        a[c] = a[c]+32;
    }
}

void Arraysort(char a[]){
    int temperory = 0,k,l;
    for(k = 0; k < strlen(a)-1; k++){
        for (l = k+1; l < strlen(a); l++){
            if(a[k] > a[l]){
                temperory = a[k];
                a[k] = a[l];
                a[l] = temperory;
            }
        }
    }
}