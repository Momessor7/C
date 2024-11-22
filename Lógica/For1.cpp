//Escreva um programa que leia dois vetores com 10 elementos cada e gere um terceiro vetor de 20 elementos, 
//cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores. Ao final o programa
// deverá mostrar os dois vetores originais e o terceiro vetor com os valores intercalados.

#include <stdio.h>

int main() {
	int X[10];
	int Y[10];
	int result[20];
	int i;
	
	for(i = 0; i < 10; i++) {
		scanf("%d", X[i]);
	}
	
	for(i = 0; i < 10; i++) {
		scanf("%d", Y[i]);
		}
	}
	
	for(i = 0; i < 10; i++) {
		result[i] = X[i];
		result[i+1] = Y[i];
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d\n", X[i]);
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d\n", Y[i]);
	}
	
	
}
