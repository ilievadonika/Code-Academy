/*Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.*/
#include <stdio.h>
#include <stdlib.h>

#define TEMP_DEVIATION_FOR_100_M 0.5

typedef struct
{
    int height;
    float temp;
} altitude;

int distance;
float countDiviations;

float getHutVihrenTemp(altitude *peak);
float getPeakVihrenTemp(altitude *hut);
void freePointers(altitude *peak, altitude *hut);

int main()
{
    altitude *peakVihren = (altitude *)malloc(sizeof(altitude));
    altitude *hutVihren = (altitude *)malloc(sizeof(altitude));

    peakVihren->height = 2918;
    hutVihren->height = 1950;

    distance = peakVihren->height - hutVihren->height;
    countDiviations = distance / 100.0;

    hutVihren->temp = getHutVihrenTemp(peakVihren);
    printf("\nIf the atmospheric pressure is normal and the temperature of peak Vihren is %.2fC,\nthen the temperature of hut Vihren is %.2fC\n", peakVihren->temp, hutVihren->temp);

    peakVihren->temp = getPeakVihrenTemp(hutVihren);
    printf("\nIf the atmospheric pressure is normal and the temperature of hut Vihren is %.2fC,\nthen the temperature of peak Vihren is %.2fC\n", hutVihren->temp, peakVihren->temp);

    free(hutVihren);
    hutVihren = NULL;
    free(peakVihren);
    peakVihren = NULL;

    return 0;
}

float getHutVihrenTemp(altitude *peak)
{
    printf("Please enter peak Vihren's temp: ");
    scanf("%f", &peak->temp);

    float result = (countDiviations * TEMP_DEVIATION_FOR_100_M) + peak->temp;

    return result;
}

float getPeakVihrenTemp(altitude *hut)
{
    printf("Please enter hut Vihren's temp: ");
    scanf("%f", &hut->temp);

    float result = hut->temp - (countDiviations * TEMP_DEVIATION_FOR_100_M);

    return result;
}
