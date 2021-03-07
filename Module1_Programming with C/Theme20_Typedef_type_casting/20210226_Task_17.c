/*Задача 17
Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct watermelon{
    int diameter;
    float rind;
}wm;

wm* fillMelonArray(int mNumber);
wm* fillPumpkinArray(int pNumber);
float findDiameterAvg(wm *sort,int number);
float findRindAvg(wm *sort,int number);
void findBetterMelon(wm *melons,int mNumber,wm *pumpkin,int pNumber);


int main(void){

    int melonNumber,pumpkinNumber;
    printf("Enter the number of melons: \n");
    scanf("%d",&melonNumber);
    wm *melons = (wm*)malloc(melonNumber*sizeof(wm));
    melons = fillMelonArray(melonNumber);
    printf("Enter the number of pumpkins: \n");
    scanf("%d",&pumpkinNumber);
    wm *pumpkins = (wm*)malloc(pumpkinNumber*sizeof(wm));
    pumpkins = fillPumpkinArray(pumpkinNumber);
    findBetterMelon(melons,melonNumber,pumpkins,pumpkinNumber);

    free(melons);
    free(pumpkins);
    return 0;
}

wm* fillMelonArray(int mNumber){

    srand((unsigned)time(NULL));
    wm *melon = (wm*)malloc(mNumber*sizeof(wm));
    int i;
    for(i=0;i<mNumber;i++){
        (melon+i)->diameter = (rand() % 126) + 15;
        (melon+i)->rind = (((float)(rand() / (float)RAND_MAX)) * 3.1) + 0.5;
    }

    printf("Printing melons:\n");
    for(i=0;i<mNumber;i++){
        printf("For melon number %d\n",i+1);
        printf("Melon diameter: %d\tMelon rind: %.2f\n",(melon+i)->diameter,(melon+i)->rind);
    }

    return melon;
}

wm* fillPumpkinArray(int pNumber){

    srand((unsigned)time(NULL));
    wm *pumpkin = (wm*)malloc(pNumber*sizeof(wm));
    int i;
    for(i=0;i<pNumber;i++){
        (pumpkin+i)->diameter = (rand() % 61) + 35;
        (pumpkin+i)->rind = (((float)(rand() / (float)RAND_MAX)) * 0.61) + 0.3;
    }

    printf("Printing pumpkins:\n");
    for(i=0;i<pNumber;i++){
        printf("For pumpkin number %d\n",i+1);
        printf("Pumpkin diameter: %d\tPumpkin rind: %.2f\n",(pumpkin+i)->diameter,(pumpkin+i)->rind);
    }

    return pumpkin;
}

float findDiameterAvg(wm *sort,int number){
    
    float diameterAvg = 0;
    int i;
    for(i=0;i<number;i++){
        diameterAvg += (sort+i)->diameter;
    }
    diameterAvg = diameterAvg/number;

    return diameterAvg;
}

float findRindAvg(wm *sort,int number){
    
    float rindAvg = 0;
    int i;
    for(i=0;i<number;i++){
        rindAvg += (sort+i)->rind;
    }
    rindAvg = rindAvg/number;

    return rindAvg;
}

void findBetterMelon(wm *melons,int mNumber,wm *pumpkin,int pNumber){

    float melonDiamAvg = findDiameterAvg(melons,mNumber);
    printf("Melon diameter avg is: %.2f\n",melonDiamAvg);
    float melonRindAvg = findRindAvg(melons,mNumber);
    printf("Melon rind avg is: %.2f\n",melonRindAvg);

    float pumpkinDiamAvg = findDiameterAvg(pumpkin,pNumber);
    printf("Pumpkin diameter avg is: %.2f\n",pumpkinDiamAvg);
    float pumpkinRindAvg = findRindAvg(pumpkin,pNumber);
    printf("Pumpkin rind avg is: %.2f\n",pumpkinRindAvg);

    if(melonDiamAvg > pumpkinDiamAvg){
        if(melonRindAvg < pumpkinRindAvg){
            printf("It is better to buy %d watermelons with a diameter of %.2f centimeters and bark with a thickness of %.2f cm instead of %d watermelons with a diameter of %.2f cm and bark thickness %.2f cm.",mNumber,melonDiamAvg,melonRindAvg,pNumber,pumpkinDiamAvg,pumpkinRindAvg);
        }
        else{
            printf("It is better to buy %d watermelons with a diameter of %.2f centimeters and bark with a thickness of %.2f cm instead of %d watermelons with a diameter of %.2f cm and bark thickness %.2f cm.",pNumber,pumpkinDiamAvg,pumpkinRindAvg,mNumber,melonDiamAvg,melonRindAvg);
        }
    }
    else{
        if(melonRindAvg < pumpkinRindAvg){
            printf("It is better to buy %d watermelons with a diameter of %.2f centimeters and bark with a thickness of %.2f cm instead of %d watermelons with a diameter of %.2f cm and bark thickness %.2f cm.",mNumber,melonDiamAvg,melonRindAvg,pNumber,pumpkinDiamAvg,pumpkinRindAvg);
        }
        else{
            printf("It is better to buy %d watermelons with a diameter of %.2f centimeters and bark with a thickness of %.2f cm instead of %d watermelons with a diameter of %.2f cm and bark thickness %.2f cm.",pNumber,pumpkinDiamAvg,pumpkinRindAvg,mNumber,melonDiamAvg,melonRindAvg);
        }
    }

}