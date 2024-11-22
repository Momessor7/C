#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO{
	int dado;
	struct NO *prox;
}NO;

typedef struct PILHA{
	NO *topo;
}PILHA;

void iniciarPILHA(PILHA *p) {
	p->topo = NULL;
}

void empilhamento(int dado, PILHA *p) {
	NO *ptr = (NO*) malloc(sizeof(NO));
	if(ptr == NULL) {
		printf("Erro de alocacao.\n");
		return;
	} else {
		ptr->dado = dado;
		ptr->prox = p->topo;
		p->topo = ptr;
	}
}

int desempilhamento(PILHA *p) {
	NO* ptr = p->topo;
	int dado;//dado de backup
	if(ptr == NULL) {
		printf("Pilha vazia.\n");
		return 0;
	} else {
		p->topo = ptr->prox;
		ptr->prox = NULL;
		dado = ptr->dado;
		free(ptr);
		return dado;
	}
}

void imprimirPILHA(PILHA *p) {//imprimir primeiro o topo(meio q o contrario)
	NO *ptr = p->topo;
	if(ptr == NULL) {
		printf("Pilha vazia.\n");
		return;
	} else {
		while(ptr != NULL) {
			printf("%d ", ptr->dado);
			ptr = ptr->prox;
		}
		printf("\n");
	}
}

int main() {
	PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
	if(p1 == NULL) {
		printf("Erro de alocacao.\n");
		exit(0);
	} else {
		iniciarPILHA(p1);
		empilhamento(10, p1);
		empilhamento(20, p1);
		empilhamento(30, p1);
		imprimirPILHA(p1);
		
		printf("Tentando desempilhar - resultado:%d\n", desempilhamento(p1));
		imprimirPILHA(p1);
		printf("Tentando desempilhar - resultado:%d\n", desempilhamento(p1));
		imprimirPILHA(p1);
		printf("Tentando desempilhar - resultado:%d\n", desempilhamento(p1));
		imprimirPILHA(p1);
	}
}
