#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("===TRABALHO ALGORITMO DE ESCALONAMENTO DE BRACO DE DISCO===\n");
    printf("Prof: Guilherme Nakahata\nAluno: Gabriel M. Momesso\nUNESPAR Apucarana\n\n");

    int tam;
    printf("Informe o tamanho do cilindro: ");
    scanf("%d", &tam);

    int nums[99];
    int qtd;
    printf("\nInforme a quantidade de pedidos de acesso do cilindro:");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) {
        printf("Preencha o %d pedido de acesso: ", (i + 1));
        scanf("%d", &nums[i]);
    }
    
    printf("\nTabela feita de exemplo:");
    for(int i = 0; i < tam; i++) {
        printf("%02d|", i);
    }
    printf("\ntabela vazia de exemplo: ");
    for(int i = 0; i < tam; i++) {
        printf("--|", i);
    }
	
	//FCFS
    printf("\n\n===Inicio FCFS===\n");
    for(int i = 0; i < qtd; i++) {
    	printf("Pedido%d: %d. ", (i + 1), nums[i]);
	}
    printf("\nRepresentacao do cilindro:\n");
	for(int i = 0; i < tam; i++) {
		printf("%02d|", i);
	}
	printf("\n");
	int escolhido = 0;
	for(int i = 0; i < tam; i++) {
		for(int j = 0; j < qtd; j++) {
			if(i == nums[j]) {
				printf("XX|", (j+1));
				escolhido = 1;
				break;
			}
		}
		if(!escolhido) {
			printf("--|");
		}
	}
    printf("\n===Termino FCFS===\n\n\n");

	//SSF
    printf("===Inicio SSF===\n");
    for(int i = 0; i < qtd; i++) {
    	printf("Pedido%d: %d. ", (i + 1), nums[i]);
	}
    printf("\nRepresentacao do cilindro:");
    for(int i = 0; i < tam; i++) {
    	printf("%02d|", i);
	}
	printf("\n");
	for(int i = 0; i < tam; i++) {
		for(int j = 0; j < qtd; j++) {
			if(i == nums[j]) {
				printf("XX|", j + 1);
			} else {
				printf("--|", j + 1);
			}
		}
	}
    printf("\n===Termino SSF===");
}
