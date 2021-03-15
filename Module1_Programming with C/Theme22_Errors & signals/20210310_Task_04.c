/*Задача 4.
Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.*/

#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <errno.h>
#include <signal.h>
#pragma pack(1)
 
struct PackageToBeSend{
    float weight;
    float size;
 
}member;
typedef struct PackageToBeSend t_Package;

float priceForWeight(float weight);
float priceForSize(float size);
void theBetterOffer(float group, float single);
 
float calculateGroupagePrice(t_Package * someArr,int size);
float calculateOnyByOnePrice (t_Package * someArr,int size);
 
int main(void){

    FILE *fp;
    char* fileName = "zadacha4.txt";
    fp = fopen(fileName,"w");
    if (fp == NULL){
        printf("File failed to open\n");
        return -1;
    }

    int amountOfPackages;
    float priceGroupage = 0;
    float priceOneByOne = 0;
 
    t_Package * ArrForPack = NULL;
    printf("Enter the amount of packages that must be shipped:\n");
    scanf("%int",&amountOfPackages);
    ArrForPack =(t_Package*)malloc(amountOfPackages * sizeof(t_Package));
    if (ArrForPack == NULL){
        printf("Error while trying to allocate memory.\n");
        
    }else {
        printf("Success with memory allocation!\n");
        
    }
    t_Package * pToMove = ArrForPack;
    for (int i = 0; i < amountOfPackages;i++){
        float weightToAdd;
        float sizeToAdd;
        printf("Package %i: Enter the weight and the size of your package:\n",i);
        scanf("%f %f",&weightToAdd,&sizeToAdd);
        
        pToMove->weight = weightToAdd;
        pToMove->size = sizeToAdd;
        printf("Package %i added successfully. W = %.2f, S = %.2f\n",i,ArrForPack[i].weight,ArrForPack[i].size);
        pToMove += 1;
    }
 
    priceGroupage = calculateGroupagePrice(ArrForPack,amountOfPackages);
    if (priceGroupage != 0){
        fprintf(fp,"%s %s\n","float calculateGroupagePrice(t_Package * someArr,int size)","success");
    }
    else{
        fprintf(fp,"%s %s\n","float calculateGroupagePrice(t_Package * someArr,int size)",strerror(errno));
    }
    priceOneByOne = calculateOnyByOnePrice(ArrForPack,amountOfPackages);
    if (priceOneByOne != 0){
        fprintf(fp,"%s %s\n","float calculateOnyByOnePrice (t_Package * someArr,int size)","success");
    }
    else{
        fprintf(fp,"%s %s\n","float calculateOnyByOnePrice (t_Package * someArr,int size)",strerror(errno));
    }
    theBetterOffer(priceGroupage,priceOneByOne);
    if (theBetterOffer != 0){
        fprintf(fp,"%s %s\n","void theBetterOffer(float group, float single)","success");
    }
    else{
        fprintf(fp,"%s %s\n","void theBetterOffer(float group, float single)",strerror(errno));
    }
    free(ArrForPack);
    fclose(fp);
    fp = NULL;
    return 0;
}
 
float priceForWeight(float weight){
    float somePrice = 0;
    if((weight > 0) && (weight<= 20)){
        somePrice = 0.46;
    }else if((weight >= 21) && (weight <= 50)){
        somePrice = 0.69;
    }else if ((weight >= 51) && (weight <= 100)){
        somePrice = 1.02;
    }else if( (weight >= 101) && (weight <= 200)){
        somePrice = 1.75;
    }else if ((weight >= 201) && (weight <= 350)){
        somePrice = 2.13;
    }else if ((weight >= 351) && (weight <= 500)){
        somePrice = 2.44;
    }else if ((weight >= 501) && (weight <= 1000)){
        somePrice = 3.20;
    }else if ((weight >= 1001) && (weight <= 2000)){
        somePrice = 4.27;
    }
    else if ((weight >= 2001) && (weight <= 3000)){
        somePrice = 5.03;
    }else{
        printf("Your package is too heavy.Please enter a valid weight up to 3kg\n");
        priceForWeight(weight);
    }
 
    return somePrice;
}
 
float priceForSize( float size){
    float priceToReturn = 0;
    if ((size > 0)&& (size < 10)){
        priceToReturn = 0.01;
    }else if ((size >= 10)&& (size < 50)){
        priceToReturn = 0.11;
    }else if ((size >= 50)&& (size < 100)){
        priceToReturn = 0.22;
    }else if ((size >= 100)&& (size < 150)){
        priceToReturn = 0.33;
    }else if ((size >= 150)&& (size < 250)){
        priceToReturn = 0.56;
    }else if ((size >= 250)&& (size < 400)){
        priceToReturn = 1.50;
    }else if ((size >= 400)&& (size < 500)){
        priceToReturn = 3.11;
    }else if ((size >= 500)&& (size < 600)){
        priceToReturn = 4.89;
    }else if (size >= 600){
        priceToReturn = 5.79;
    }
    return priceToReturn;
}
 
void theBetterOffer(float group, float single){
    if ( group < single){
        printf("The price for groupage shipping is %.2f and its cheaper than the price for single shipping %.2f.\n",group,single);
    }else if (group > single){
        printf("The price for groupage shipping is %.2f and its more expensive than the price for single shipping %.2f.\n",group,single);
    }else {
        printf("The prices are the same %f = %.2f",group,single);
    }
}
 
void populateArr(t_Package * someArr,int size){
    
    someArr =(t_Package*)malloc(size * sizeof(t_Package));
    if (someArr == NULL){
        printf("Error while trying to allocate memory.\n");
        
    }else {
        printf("Success with memory allocation!\n");
        
    }
    t_Package * pToMove = someArr;
    for (int i = 0; i < size;i++){
        float weightToAdd;
        float sizeToAdd;
        printf("Package %i: Enter the weight and the size of your package:\n",i);
        scanf("%f %f",&weightToAdd,&sizeToAdd);
        
        pToMove->weight = weightToAdd;
        pToMove->size = sizeToAdd;
        printf("Package %i added successfully. W = %.2f, S = %.2f\n",i,someArr[i].weight,someArr[i].size);
        pToMove += 1;
    }
}
 
float calculateGroupagePrice(t_Package * someArr,int size){
    float totalWeightGroup = 0;
    float totalSizeSingle = 0;
    float priceToReturn = 0;
    
 
    for (int i = 0; i < size;i++){
        totalWeightGroup += someArr[i].weight;
        totalSizeSingle += someArr[i].size;
    }
    
    
    priceToReturn += priceForWeight(totalWeightGroup);
    priceToReturn += priceForSize(totalSizeSingle);
 
    return priceToReturn;
}
 
float calculateOnyByOnePrice (t_Package * someArr,int size){
    float totalPriceToReturn = 0;
    float priceForCurrentPackage;
    
    for (int i = 0; i < size; i++){
        priceForCurrentPackage = 0;
        priceForCurrentPackage += priceForWeight(someArr[i].weight);
        priceForCurrentPackage += priceForSize(someArr[i].size);
 
        totalPriceToReturn += priceForCurrentPackage;
 
    }
    return totalPriceToReturn;
}