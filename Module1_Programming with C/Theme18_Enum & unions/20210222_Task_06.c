/*Задача 6.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/

#include <stdio.h>
#include <stdlib.h>

struct tagTMyTime{

    int hours;
    int minutes;
    int seconds;

};

struct tagTMyTime addSeconds(struct tagTMyTime time,int second);
struct tagTMyTime addMinutes(struct tagTMyTime time,int minutes);
struct tagTMyTime addHours(struct tagTMyTime time,int hours);
void printSeconds(struct tagTMyTime time);
struct tagTMyTime returnStruct(int second);
struct tagTMyTime addStructure(struct tagTMyTime time1,struct tagTMyTime time2);
struct tagTMyTime subtractStructure(struct tagTMyTime time1,struct tagTMyTime time2);
void printTime(struct tagTMyTime time);

int main(void){

    struct tagTMyTime time1 = {14,42,55};
    struct tagTMyTime time2 = {12,38,38};
    printf("Adding seconds to time2: \n");
    time2 = addSeconds(time2,2);
    printSeconds(time2);
    printf("Adding minutes to time1: \n");
    time1 = addMinutes(time1,18);
    printf("Adding seconds to time1: \n");
    time1 = addSeconds(time1,5);
    printSeconds(time1);
    printf("Adding hours to time1: \n");
    time1 = addHours(time1,5);
    printTime(time1);

    struct tagTMyTime structReturn;
    structReturn = returnStruct(18);
    printf("Returning structure with 18 seconds:\n");
    printTime(structReturn);

    struct tagTMyTime addResult;
    addResult = addStructure(time1,time2);
    printf("Result structure after adding 2 structures: \n");
    printTime(addResult);

    struct tagTMyTime subtractResult;
    subtractResult = subtractStructure(time1,time2);
    printf("Result structure after subtracting 2 structures:\n");
    printTime(subtractResult);

    return 0;
}

struct tagTMyTime addSeconds(struct tagTMyTime time,int second){

    time.seconds += second;
    while(time.seconds>=60){
        time.seconds = time.seconds - 60;
        time.minutes++;
        while(time.minutes>=60){
            time.minutes = time.minutes - 60;
            time.hours++;
        }
    }

    return time;
}

struct tagTMyTime addMinutes(struct tagTMyTime time,int minutes){

    time.minutes += minutes;
    while(time.minutes>=60){
        time.minutes = time.minutes - 60;
        time.hours++;
    }

    return time;
}

struct tagTMyTime addHours(struct tagTMyTime time,int hours){

    time.hours += hours;

    return time;
}

void printSeconds(struct tagTMyTime time){
    printf("Seconds: %d\n",time.seconds);
}

struct tagTMyTime returnStruct(int second){

    struct tagTMyTime newSeconds;
    newSeconds.seconds = second;
    newSeconds.minutes = 0;
    newSeconds.hours = 0;

    while(newSeconds.seconds>=60){
        newSeconds.seconds = newSeconds.seconds - 60;
        newSeconds.minutes++;
    }

    return newSeconds;
}

struct tagTMyTime addStructure(struct tagTMyTime time1,struct tagTMyTime time2){

    struct tagTMyTime result;
    result.hours = time1.hours + time2.hours;
    result.minutes = time1.minutes + time2.minutes;
    while(result.minutes>=60){
        result.minutes = result.minutes - 60;
        result.hours++;
    }
    result.seconds = time1.seconds + time2.seconds;
    while(result.seconds>=60){
        result.seconds = result.seconds - 60;
        result.minutes++;
    }

    return result;
}

struct tagTMyTime subtractStructure(struct tagTMyTime time1,struct tagTMyTime time2){

    struct tagTMyTime result;
    if(time1.hours > time2.hours){
        result.hours = time1.hours - time2.hours;
    }
    else{
        result.hours = time2.hours - time1.hours;
    }
    if(time1.minutes > time2.minutes){
        result.minutes = time1.minutes - time2.minutes;
    }
    else{
        result.minutes = time2.minutes - time1.minutes;
    }
    if(time1.seconds > time2.seconds){
        result.seconds = time1.seconds - time2.seconds;
    }
    else{
        result.seconds = time2.seconds - time1.seconds;
    }

    return result;
}

void printTime(struct tagTMyTime time){
    printf("Hours: %d\n",time.hours);
    printf("Minutes: %d\n",time.minutes);
    printf("Seconds: %d\n",time.seconds);
}