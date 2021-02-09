/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

#include <stdio.h>

int Months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int countDay(int d, int m, int y);

int main(void){
    int day;
    int month;
    int year;

    printf("Please enter a date, as follows.\n");
    printf("Day: ");
    scanf("%d", &day);
    printf("Month: ");
    scanf("%d", &month);
    printf("Year: ");
    scanf("%d", &year);

    printf("This is the %d day of the year.", countDay(day, month, year));

    return 0;
}
extern int Months[12];

int countDay(int d, int m, int y){
    int total = 0;
    int countDaysOfMonth = 0;

    if(y % 4 != 0)
        Months[1] = 28;

    for(int i = 1; i < m; i++){
        countDaysOfMonth += Months[i];
    }
    total = countDaysOfMonth + d;

    return total;
}