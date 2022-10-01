/*
Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
Liquido.
*/

#include <stdio.h>
#include <stdlib.H>

main()
{
	int HT;
	float VH;
	float PD;
	float SB;
	float SL;
	float TD;
	printf("Insira aqui as horas trabalhadas: \n");
	scanf("%d", &HT);
	printf("Insira aqui o valor da horas: \n");
	scanf("%f", &VH);
	printf("Insira o percentual de desconto: \n");
	scanf("%f", &PD);
	SB=HT*VH;
	TD=(PD/100)*SB;
	SL=SB-TD;
	
	printf("Horas trabalhadas: %d. \n", HT);
	printf("Salario Bruto: %.2f. \n", SB);
	printf("Desconto: %.2f. \n", PD);
	printf("Salario Liquido: %.2f. \n", SL);
}