//Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre
//os números pares e suas respectivas posições no vetor (índice).

#include <stdio.h>
#include <stdlib.h>

int main() {
	int X[9];
	
	for(int i = 0; i < 9; i++) {
		printf("Digite o numero inteiro que vc quiser: \n");
		scanf("%d", &X[i]);
	}
	for(int i = 0; i < 9; i++) {
		if(X[i] % 2 == 0) {
			printf("Numero par %d na posicao %d\n", X[i], i);
		}
	}
}
