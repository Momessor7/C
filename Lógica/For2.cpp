//Fa�a um programa que receba a temperatura m�dia de cada m�s do ano,
//armazenando-as em um vetor. Calcule e mostre a maior e a menor temperatura do ano e
//em que m�s ocorreram (mostrar o m�s por extenso: 1 � janeiro, 2 � fevereiro...).
//Desconsidere empates.
#include <stdio.h>
#include <stdlib.h>

int main() {
	int temp[12];
	
	for(int i = 0; i < 12; i++) {
		printf("Preencha a temperatura do mes %d: \n", i+1);
		scanf("%d", &temp[i]);
	}
	
	for(int i = 0; i < 12; i++) {
		printf("")
	}
}
