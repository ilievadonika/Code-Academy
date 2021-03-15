/*Задача 1.
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void compareFiles(FILE *fp1, FILE *fp2);

int main(void) { 
    // opening both file in read only mode 
    FILE *fp1 = fopen("file1.txt", "r"); 
    FILE *fp2 = fopen("file2.txt", "r"); 
  
    if (fp1 == NULL || fp2 == NULL) { 
       printf("Error : Files not open"); 
       exit(0); 
    } 
  
    compareFiles(fp1, fp2); 
  
    // closing both file 
    fclose(fp1); 
    fclose(fp2); 
    
    return 0; 
} 

void compareFiles(FILE *fp1, FILE *fp2) { 
    // fetching character of two file 
    // in two variable ch1 and ch2 
    char ch1 = getc(fp1); 
    char ch2 = getc(fp2); 
  
    // error keeps track of number of errors 
    // pos keeps track of position of errors 
    // line keeps track of error line 
    int error = 0, pos = 0, line = 1; 
  
    // iterate loop till end of file 
    while (ch1 != EOF && ch2 != EOF) { 
        pos++; 
  
        // if both variable encounters new 
        // line then line variable is incremented 
        // and pos variable is set to 0 
        if (ch1 == '\n' && ch2 == '\n') { 
            line++; 
            pos = 0; 
        } 
  
        // if fetched data is not equal then 
        // error is incremented 
        if (ch1 != ch2) { 
            error++; 
            printf("Line Number : %d \tError"
               " Position : %d \n", line, pos); 
        } 
  
        // fetching character until end of file 
        ch1 = getc(fp1); 
        ch2 = getc(fp2); 
    } 
  
    printf("Total Errors : %d\t", error); 
}