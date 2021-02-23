/*Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx*/
#include <stdio.h>

char reverseString(char *s, int size); 

int main(int argc, char **argv) {
    int size = 0;
    char string[size];
    char c;
    int i = 0;
    char *str = &string;

    printf("Enter string size: ");
    scanf(" %d", &size);
    fflush(stdin);
    printf("Enter your string: ");
    while((c = getchar()) != '\n'){
        str[i++] = c;
    }

    char(*rev)(char *, int) = reverseString;
    rev(string, size);

    printf("The reversed string is: %s", string);

    return 0;
}

char reverseString(char *s, int size) { 
    char *begin_ptr, *end_ptr, ch; 
    int i = 0;
  
    // Set the begin_ptr and end_ptr 
    // initially to start of string 
    begin_ptr = s; 
    end_ptr = s; 
  
    // Move the end_ptr to the last character 
    for (i = 0; i < size - 1; i++) 
        end_ptr++; 
  
    // Swap the char from start and end 
    // index using begin_ptr and end_ptr 
    for (i = 0; i < size / 2; i++) { 
        // swap character 
        ch = *end_ptr; 
        *end_ptr = *begin_ptr; 
        *begin_ptr = ch; 
  
        // update pointers positions 
        begin_ptr++; 
        end_ptr--; 
    } 
    return *s;
} 
