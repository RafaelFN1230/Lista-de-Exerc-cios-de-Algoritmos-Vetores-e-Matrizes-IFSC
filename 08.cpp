#include <stdio.h>
#include <stdlib.H>
/*
Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
A=B*Alt/2. Utilize as variáveis AREA, BASE e ALTURA e os
operadores aritméticos de multiplicação e divisão.
*/
main()
{
	float Area;
	float Base;
	float Altura;
	
	printf("Insira aqui a base da piramide: \n");
	scanf("%f", &Base);
	printf("Insira aqui a altura da piramide: \n");
	scanf("%f", &Altura);
	printf("Sua piramide tem base de %.2f,e altura de %.2f.\n", Base, Altura);
	
	Area=(Base*Altura)/2;
	
	printf("A piramide tem %.2f de area.\n", Area);
	
}