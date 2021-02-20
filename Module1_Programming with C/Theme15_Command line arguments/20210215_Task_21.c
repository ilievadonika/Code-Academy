/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
   char arr[5][50], newArr[50];
   printf("Enter 5 words: ");

   for (int i = 0; i < 5; ++i) {
      fgets(arr[i], sizeof(arr[i]), stdin);
   }

   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j) {

         if (strcmp(arr[i], arr[j]) > 0) {
            strcpy(newArr, arr[i]);
            strcpy(arr[i], arr[j]);
            strcpy(arr[j], newArr);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(arr[i], stdout);
   }
   return 0;
}