/*Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 
20 г 0,46 лева; 
21-50 г 0,69 лева; 
51-100 г 1,02 лева; 
101-200 г 1,75 лева; 
201-350 г 2,13 лева; 
351-500 г 2,44 лева; 
501-1000 г 3,20 лева; 
1001-2000 г 4,27 лева; 
2001-3000 г 5,03 лева;
Обем: 
до 10см + 0,01лв; 
10- 50 см + 0,11 лева, 
50-100 см + 0,22лв, 
100-150см + 0,33лв, 
150-250см +0,56лв, 
250-400см+1.50лв, 
400-500см+3,11лв, 
500-600см+4,89лв, 
над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.*/
#include <stdlib.h>
#include <stdio.h>

#define PRICE_TAGS 9

const float weightPrices[2][PRICE_TAGS] = {
    {20,    50,     100,    200,    350,    500,    1000,   2000,   3000},
    {0.46,  0.69,   1.02,   1.75,   2.13,   2.44,   3.20,   4.27,   5.03}};

const float volumePrices[2][PRICE_TAGS] = {
    {600,   500,    400,    250,    150,    100,    50,     10,     1},
    {5.79,  4.89,   3.11,   1.50,   0.56,   0.33,   0.22,   0.11,   0.01}};

typedef struct
{
    int weight;
    int volume;
    float price;
} shipment;

int numberOfShipments;

float calculateSeparately(shipment *orderArray);
float calculateTogether(shipment *orderArray);
void enterValidNumber(int min, int max, int* number, char *promt);
void betterChoice(float *separate, float *together, shipment *orderArray);

int main()
{
    printf("Please enter how many shipments you would like to make: ");
    scanf("%d", &numberOfShipments);

    shipment *order = (shipment *)malloc(numberOfShipments * sizeof(shipment));
    if(NULL == order)
    {
        printf("Allocation memory error!\n");
        exit(1);
    }

    for (int i = 0; i < numberOfShipments; i++)
    {
        printf("Enter details for shipment No %d:\n", i + 1);
        enterValidNumber(1, 3000, &order[i].weight, "Weight:");

        printf("Volume: ");
        scanf("%d", &order[i].volume);
        order[i].price = 0.0;
    }

    float separatePrice = calculateSeparately(order);
    float togetherPrice = calculateTogether(order);

    betterChoice(&separatePrice, &togetherPrice, order);

    free(order);
    order = NULL;

    return 0;
}
void betterChoice(float *separate, float *together, shipment *orderArray)
{
    printf("For orders with");
    for(int i = 0; i < numberOfShipments; i++)
    {
        printf(" weight %d and volume %d ", orderArray[i].weight, orderArray[i].volume);
    }
    if(*separate > *together)
    {
        printf("is better to ship together since the price is: %.2f\n", *together);
    }
    else
    {
        printf("is better to ship separately since the price is: %.2f\n", *separate);
    }

    return;
}

void enterValidNumber(int min, int max, int* number, char *promt)
{
    do
    {
        printf("%s", promt);
        scanf("%d", number);
    } while (*number < min || *number > max);
}

float calculateSeparately(shipment *orderArray)
{
    float weightPrice, volumePrice, totalSeparately = 0.0;
    int flagVolume, flagWeight;

    for (int i = 0; i < numberOfShipments; i++)
    {
        flagVolume = 0, flagWeight = 0;
        for (int j = 0; j < PRICE_TAGS; j++)
        {
            if ((orderArray[i].weight <= weightPrices[0][j]) && (flagWeight == 0))
            {
                weightPrice = weightPrices[1][j];
                flagWeight = 1;
            }

            if ((orderArray[i].volume > volumePrices[0][j]) && (flagVolume == 0))
            {
                volumePrice = volumePrices[1][j];
                flagVolume = 1;
            }
        }
        orderArray[i].price = weightPrice + volumePrice;
        totalSeparately += orderArray[i].price;
    }
    return totalSeparately;
}

float calculateTogether(shipment *orderArray)
{
    float weightPrice = 0.0, volumePrice = 0.0, totalTogether = 0.0;
    int totalWeight = 0, totalVolume = 0;

    for (int i = 0; i < numberOfShipments; i++)
    {
        totalWeight += orderArray[i].weight;
        totalVolume += orderArray[i].volume;
    }

    /*Since max weight is 3000 we have to see how many time we exceed that weight so we cam add it properly to the price and the new total weight is the remaining*/
    int countMaxWeightTimes = 0;
    if (totalWeight > 3000)
    {
        countMaxWeightTimes = totalWeight / 3000;
        totalWeight = totalWeight % 3000;
    }
    weightPrice += countMaxWeightTimes * weightPrices[1][PRICE_TAGS - 1];

    int flagWeight = 0, flagVolume = 0;
    for (int j = 0; j < PRICE_TAGS; j++)
    {
        if ((totalWeight <= weightPrices[0][j]) && (flagWeight == 0))
        {
            weightPrice += weightPrices[1][j];
            flagWeight = 1;
        }

        if ((totalVolume > volumePrices[0][j]) && (flagVolume == 0))
        {
            volumePrice = volumePrices[1][j];
            flagVolume = 1;
        }
    }

    totalTogether = weightPrice + volumePrice;

    return totalTogether;
}
