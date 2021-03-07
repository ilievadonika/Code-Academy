/*Задача 15.
Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/

#include <stdio.h>
#include <stdlib.h>

enum state {one = 1,two = 2,three = 3,four = 4,five = 5, six = 6, seven = 7, eight = 8, nine = 9, ten = 10, eleven = 11, twelve = 12, thirteen = 13, fourteen = 14,
fifteen = 15, sixteen = 16, seventeen = 17, eighteen = 18, nineteen = 19, twenty = 20};

struct variables{

    int i;
    char text[10];
    double d;
    enum state e;

};

int writeToFile(struct variables array[],char const *fileName);

int main(void){

    struct variables var[20] = {[0] = {1,"Start",3.4,one}, [1] = {2,"Hello",3.6,two}, [2] = {3,"Hello",3.8,three}, [3] = {4,"Hello",4.8,four}, [4] = {5,"Hello",5.1,five},
    [5] = {5,"Hello",5.1,six},[6] = {5,"Hello",5.1,seven},[7] = {7,"Hello",5.1,eight},[8] = {2,"Hello",5.1,nine},[9] = {5,"Hello",5.1,ten},[10] = {5,"Hello",5.1,eleven}
    ,[11] = {4,"Hello",5.1,twelve},[12] = {5,"Hello",5.1,thirteen},[13] = {7,"Hello",5.1,fourteen},[14] = {2,"Hello",5.1,fifteen},[15] = {5,"Hello",5.1,sixteen},
    [16] = {5,"Hello",5.1,seventeen},[17] = {3,"Hello",5.1,eighteen},[18] = {6,"Hello",5.1,nineteen},[19] = {8,"End",9.75,twenty}};

    if(writeToFile(var,"structs20.cvs") == 0){
        printf("Successfully writen to file\n");
    }
    else{
        printf("Failed to write to file\n");
    }

}

int writeToFile(struct variables array[],char const *fileName){

    int i;
    FILE *fp;
    fp = fopen(fileName,"w");

    if(fp==NULL){
        printf("Failed to create a file\n");
        return 1;
    }

    for(i=0;i<20;i++){
        fprintf(fp,"%d, %s, %lf, %d\n",(array+i)->i,(array+i)->text,(array+i)->d,(array+i)->e);
    }

    fclose(fp);
    return 0;
}