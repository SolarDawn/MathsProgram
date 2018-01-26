/* 
 * File:   main.c
 * Author: SolarFlare
 *
 * Created on 25 January 2018, 23:01
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/*
 * 
 */


int main() {
    menu();
    return 0;
}

int menu(){
    int choice = 0;
    printf("Please Choose An Option Below\n");
    printf("1.Add Numbers\n");
    printf("2.Subtract Numbers\n");
    printf("3.Multiply Numbers\n");
    printf("4.Divide Numbers\n");
    printf("5.Quit\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
            printf("%d", addNumbers());
            break;
        case 2:
            printf("%d", subtractNumbers());
            break;
        case 3:
            printf("%d", multiplyNumbers());
            break;
        case 4:
            printf("%f", divideNumbers());
            break;
        case 5:
            return 0;            
        default:
            printf("Failed\n");
            menu();        
    }
    return 0;
}

int addNumbers(){
    int num1 = 0, num2 = 0;
    printf("Please Input A Number\n");
    scanf("%d",&num1);
    printf("Please Input Another Number\n");
    scanf("%d",&num2);
    return num1+num2;
}

int subtractNumbers(){
    int num1 = 0, num2 = 0;
    printf("Please Input A Number\n");
    scanf("%d",&num1);
    printf("Please Input Another Number\n");
    scanf("%d",&num2);
    return num1-num2;
}

int multiplyNumbers(){
    int num1 = 0, num2 = 0;
    printf("Please Input A Number\n");
    scanf("%d",&num1);
    printf("Please Input Another Number\n");
    scanf("%d",&num2);
    return num1*num2;
}

float divideNumbers(){
    float num1 = 0, num2 = 0;
    printf("Please Input A Number\n");
    scanf("%f",&num1);
    printf("Please Input Another Number\n");
    scanf("%f",&num2);
    return num1/num2;
}

