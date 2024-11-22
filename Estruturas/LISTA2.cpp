#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
	int num;
	struct no *prox;
}NO;

NO criarNO() {
	NO *novo = (NO*) malloc(sizeof(NO));
	return novo;
}

void inserirINICIO(NO *lista, int dado) {
	NO *novoNO = criarNO();
	novoNO->num = dado;
	if(lista == NULL) {
		lista = novoNO;
		novoNO->prox = NULL;
	} else {
		novoNO->prox = lista;
		lista = novoNO;
	}
	return lista;
}

NO inserirFIM(NO *lista, int dado) {
	NO *novoFIM = criarNO();
	novoFIM->num = dado;
	if(lista == NULL) {
		lista = novoFIM;
		novoFIM->prox = NULL;
	} else {
		NO *aux = lista;
		while(aux->prox != NULL) {
			aux = aux->prox;
		}
		novoFIM->prox = NULL;
		aux->prox = novoFIM;
	}
	return lista;
}

void imprimirLISTA(NO *lista) {
	NO *aux = lista;
	while(aux != NULL) {
		printf("%d ", aux->num);
		aux = aux->prox;
	}
}

NO remover(NO *lista, int dado) {
	if(lista == NULL) return NULL;
	NO *temp = lista;
	NO *prev = NULL;
	if(temp != NULL && temp->num == dado) {
		lista = temp->prox;
		free(temp);
		return lista;
	}
	
	while(temp != NULL && temp->num != dado) {
		prev = temp;
		temp = temp->prox;
	}
	
	if(temp == NULL) return lista;
	prev->prox = temp->prox;
	free(temp);
	return lista;
}

int main() {
	NO *lista = NULL;
	lista = inserirINICIO(lista, 2);
	lista = inserirINICIO(lista, 1);
	lista = inserirFIM(lista, 7);
	printf("Printando a lista original:");
	imprimirLISTA(lista);
	printf("\n");
	
	int num;
	printf("Digite o numero que vc quer eliminar do codigo:");
	scanf("%d ", &num);
	
	lista = remover(lista, num);
	
	printf("Como ficou apos eliminar:");
	imprimirLISTA(lista);
}











