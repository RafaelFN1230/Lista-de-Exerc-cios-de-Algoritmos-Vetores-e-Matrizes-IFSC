/*
Faça um algoritmo que:
a) Leia um número inteiro;
b) Leia um segundo número inteiro;
c) Efetue a adição dos dois valores;
d) Apresente o valor calculad
*/

#include <stdio.h>
#include <stdlib.H>

main() {
	int primeiro;
	int segundo;
	int soma;
	printf("Insira aqui o primeiro numero: \n");
	scanf("%d", &primeiro);
	printf("Insira aqui o segundo numero: \n");
	scanf("%d", &segundo);
	soma=primeiro+segundo;
	printf("Este e o resultado da soma: %d", soma);
	
}
