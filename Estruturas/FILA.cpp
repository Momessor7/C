#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //imprimir caracteres
//FILA *REMOVE* do INICIO
typedef struct NO {
	int dado;
	struct NO *prox;
}NO;

typedef struct FILA {
	NO *inicio;
	NO *fim;
}FILA;

void iniciarFILA(FILA *f) {
	f->inicio = NULL;
	f->fim = NULL;
}

void enfileirar(int dado, FILA *f) {
	NO *ptr = (NO*) malloc(sizeof(NO));
	if(ptr == NULL) {
		printf("Erro de alocacao.\n");
	} else {
		ptr->dado = dado;
		ptr->prox = NULL;
		if(f->inicio == NULL) {
			f->inicio = ptr; //ptr = um nó
		} else {
			f->fim->prox = ptr;
		}
		f->fim = ptr;
		return;
	}
}

int desenfileirar(FILA *f) {
	NO *ptr = f->inicio;
	int dado;//dado de backup
	if(ptr != NULL) {
		f->inicio = ptr->prox;
		ptr->prox = NULL;
		dado = ptr->dado;
		free(ptr);
		if(f->inicio == NULL) {
			f->inicio = NULL;
		}
		return dado;
	} else {
		printf("Fila Vazia.\n");
		return 1;
	}
}

void imprimirFILA(FILA *f) {
	NO *ptr = f->inicio;
	if(ptr != NULL) {
		while(ptr != NULL) {
			printf("%d ", ptr->dado);
			ptr = ptr->prox;
		}
		printf("\n");
	} else {
		printf("Fila Vazia.\n");
		return;
	}
}

int main() {
	FILA *f1 = (FILA*) malloc(sizeof(FILA));
	if(f1 == NULL) {
		printf("Erro de alocacao.\n");
		exit(-1);
	} else {
		iniciarFILA(f1);
		enfileirar(10, f1);
		enfileirar(20, f1);
		enfileirar(30, f1);
		
		imprimirFILA(f1);
		
		printf("Tentando desenfileirar - resultado: %d\n", desenfileirar(f1));
		imprimirFILA(f1);
		printf("Tentando desenfileirar - resultado: %d\n", desenfileirar(f1));
		imprimirFILA(f1);
		printf("Tentando desenfileirar - resultado: %d\n", desenfileirar(f1));
		imprimirFILA(f1);
	}
}
