/*Задача 11.
Ако имеме дефинирано макро
#define М
кои от по долните дефиниции ще пропаднат:
а) #if M
b) #ifdef M
c) #ifndef M
d) #if defined(M)
e) #if !defined(M)*/

/* Ще отпаднат:
e) #if !defined(M) -  ще върне 0
c) #ifndef M - ще върне 0
*/