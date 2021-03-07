/*Задача 13.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef*/

#include <stdio.h>
#include <stdlib.h>

typedef struct tagTMyTime{

    int hours;
    int minutes;
    int seconds;

}myTime;

myTime* addSeconds(myTime *time,int second);
myTime* addMinutes(myTime *time,int minutes);
myTime* addHours(myTime *time,int hours);
void printSeconds(myTime *time);
myTime* returnStruct(int second);
myTime* addStructure(myTime *time1,myTime *time2);
myTime* subtractStructure(myTime *time1,myTime *time2);
void printTime(myTime *time);

int main(void){

    myTime *time1 = (myTime*)malloc(sizeof(myTime));
    time1->seconds = 30;
    time1->minutes = 31;
    time1->hours = 21;
    myTime *time2 = (myTime*)malloc(sizeof(myTime));
    time2->seconds = 20;
    time2->minutes = 14;
    time2->hours = 2;
    printf("Adding seconds to time2...\n");
    time2 = addSeconds(time2,2);
    printSeconds(time2);
    printf("Adding minutes to time1... \n");
    time1 = addMinutes(time1,18);
    printf("Time1 minutes: %d\n",time1->minutes);
    printf("Adding seconds to time1... \n");
    time1 = addSeconds(time1,5);
    printSeconds(time1);
    printf("Adding hours to time1.. \n");
    time1 = addHours(time1,5);
    printTime(time1);

    myTime *structReturn = (myTime*)malloc(sizeof(myTime));
    structReturn = returnStruct(18);
    printf("Returning structure with 18 seconds:\n");
    printTime(structReturn);
    printf("This is structure 1:\n");
    printTime(time1);
    printf("This is structure 2:\n");
    printTime(time2);
    myTime *addResult = (myTime*)malloc(sizeof(myTime));
    addResult = addStructure(time1,time2);
    printf("Result structure after adding 2 structures: \n");
    printTime(addResult);

    myTime *subtractResult = (myTime*)malloc(sizeof(myTime));
    subtractResult = subtractStructure(time1,time2);
    printf("Result structure after subtracting 2 structures:\n");
    printTime(subtractResult);


    free(time1);
    free(time2);
    free(structReturn);
    free(addResult);
    free(subtractResult);
    return 0;
}

myTime* addSeconds(myTime *time,int second){

    time->seconds += second;
    while(time->seconds>=60){
        time->seconds = time->seconds - 60;
        time->minutes++;
        while(time->minutes>=60){
            time->minutes = time->minutes - 60;
            time->hours++;
        }
    }

    return time;
}

myTime* addMinutes(myTime *time,int minutes){

    time->minutes += minutes;
    while(time->minutes>=60){
        time->minutes = time->minutes - 60;
        time->hours++;
    }

    return time;
}

myTime* addHours(myTime* time,int hours){

    time->hours += hours;

    return time;
}

void printSeconds(myTime* time){
    printf("Seconds: %d\n",time->seconds);
}

myTime* returnStruct(int second){

    myTime* newSeconds = (myTime*)malloc(sizeof(myTime));
    newSeconds->seconds = second;
    newSeconds->minutes = 0;
    newSeconds->hours = 0;

    while(newSeconds->seconds>=60){
        newSeconds->seconds = newSeconds->seconds - 60;
        newSeconds->minutes++;
    }

    return newSeconds;
}

myTime* addStructure(myTime* time1,myTime* time2){

    myTime* result = (myTime*)malloc(sizeof(myTime));
    result->hours = time1->hours + time2->hours;
    result->minutes = time1->minutes + time2->minutes;
    while(result->minutes>=60){
        result->minutes = result->minutes - 60;
        result->hours++;
    }
    result->seconds = time1->seconds + time2->seconds;
    while(result->seconds>=60){
        result->seconds = result->seconds - 60;
        result->minutes++;
    }

    return result;
}

myTime* subtractStructure(myTime* time1,myTime* time2){

    myTime* result = (myTime*)malloc(sizeof(myTime));
    if(time1->hours >= time2->hours){
        result->hours = time1->hours - time2->hours;
        if(time1->minutes >= time2->minutes){
            result->minutes = time1->minutes - time2->minutes;
            if(time1->seconds >= time2->seconds){
                result->seconds = time1->seconds - time2->seconds;
            }
            else{
                if(time1->minutes > 0){
                    time1->minutes = time1->minutes - 1;
                    time1->seconds = time1->seconds + 60;
                    result->seconds = time1->seconds - time2->seconds;
                }
                else{
                    if(time1->hours > 0){
                        time1->hours = time1->hours - 1;
                        time1->minutes = time1->minutes + 60;
                        time1->minutes = time1->minutes - 1;
                        time1->seconds = time1->seconds + 60;
                        result->seconds = time1->seconds - time2->seconds;
                    }
                    else{
                        printf("Can't substract structures, because the time will be negative!\n");
                    }
                }
            }
        }
        else{
            if(time1->hours > 0){
                time1->hours = time1->hours - 1;
                time1->minutes = time1->minutes + 60;
                result->minutes = time1->minutes - time2->minutes;
            }
            else{
                printf("Can't substract structures, because the time will be negative!\n");
            }

            if(time1->seconds >= time2->seconds){
                result->seconds = time1->seconds - time2->seconds;
            }
            else{
                if(time1->minutes > 0){
                    time1->minutes = time1->minutes - 1;
                    time1->seconds = time1->seconds + 60;
                    result->seconds = time1->seconds - time2->seconds;
                }
                else{
                    if(time1->hours > 0){
                        time1->hours = time1->hours - 1;
                        time1->minutes = time1->minutes + 60;
                        time1->minutes = time1->minutes - 1;
                        time1->seconds = time1->seconds + 60;
                        result->seconds = time1->seconds - time2->seconds;
                    }
                    else{
                        printf("Can't substract structures, because the time will be negative!\n");
                    }
                }
            }
        }
    }
    else{
        result->hours = time2->hours - time1->hours;
        if(time2->minutes >= time1->minutes){
            result->minutes = time2->minutes - time1->minutes;
            if(time2->seconds >= time1->seconds){
                result->seconds = time2->seconds - time1->seconds;
            }
            else{
                if(time2->minutes > 0){
                    time2->minutes = time2->minutes - 1;
                    time2->seconds = time2->seconds + 60;
                    result->seconds = time2->seconds - time1->seconds;
                }
                else{
                    if(time2->hours > 0){
                        time2->hours = time2->hours - 1;
                        time2->minutes = time2->minutes + 60;
                        time2->minutes = time2->minutes - 1;
                        time2->seconds = time2->seconds + 60;
                        result->seconds = time2->seconds - time1->seconds;
                    }
                    else{
                        printf("Can't substract structures, because the time will be negative!\n");
                    }
                }
            }
        }
        else{
            if(time2->hours > 0){
                time2->hours = time2->hours - 1;
                time2->minutes = time2->minutes + 60;
                result->minutes = time2->minutes - time1->minutes;
            }
            else{
                printf("Can't substract structures, because the time will be negative!\n");
            }

            if(time2->seconds >= time1->seconds){
                result->seconds = time2->seconds - time1->seconds;
            }
            else{
                if(time2->minutes > 0){
                    time2->minutes = time2->minutes - 1;
                    time2->seconds = time2->seconds + 60;
                    result->seconds = time2->seconds - time1->seconds;
                }
                else{
                    if(time2->hours > 0){
                        time2->hours = time2->hours - 1;
                        time2->minutes = time2->minutes + 60;
                        time2->minutes = time2->minutes - 1;
                        time2->seconds = time2->seconds + 60;
                        result->seconds = time2->seconds - time1->seconds;
                    }
                    else{
                        printf("Can't substract structures, because the time will be negative!\n");
                    }
                }
            }
        }
    }

    return result;
}

void printTime(myTime* time){
    printf("\n");
    printf("Hours: %d\n",time->hours);
    printf("Minutes: %d\n",time->minutes);
    printf("Seconds: %d\n",time->seconds);
    printf("\n");
}