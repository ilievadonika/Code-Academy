/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?
*/
#include <stdio.h>

void isPolyndrom(char *arr);

int main(void) {
    char arr[] = {"I did did I"};
    
    isPolyndrom(arr);

    return 0;
}

void isPolyndrom(char *arr) {
    char *ptr, *rev; 
  
    ptr = arr; 
  
    while (*ptr != '\0') { 
        ++ptr; 
    } 
    --ptr; 
  
    for (rev = arr; ptr >= rev;) { 
        if (*ptr == *rev) { 
            --ptr; 
            rev++; 
        } 
        else
            break; 
    } 
  
    if (rev > ptr) 
        printf("String is Palindrome"); 
    else
        printf("String is not a Palindrome"); 

    return;
}