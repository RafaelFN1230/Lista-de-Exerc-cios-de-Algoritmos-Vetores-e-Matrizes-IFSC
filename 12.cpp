/*
Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;
*/

#include <stdio.h>
#include <stdlib.H>
main(){

float C;
float F;

printf("Escreva a temperatura em graus Celsius: \n");
scanf("%f", &C);
F=(9*C+160)/5;
printf("A temperatura em Farenheit e: %.2f F", F);
}