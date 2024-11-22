#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct No {
int num;
struct No* prox;
}no;

no *criar_no(){
no *novo = (no*) malloc(sizeof(no));
return novo;
}

no *inserir_no_inicio(no *lista, int dado) {
    no *novo_no = criar_no(); //criar novo nó
    novo_no->num=dado;

    if(lista == NULL) {
        lista = novo_no;
        novo_no->prox = NULL;
    } else {
        novo_no -> prox = lista;
        lista = novo_no;
    }
    return lista;
}

no *inserir_elemento_fim(no *lista, int dado) {
    no *novo_fim = criar_no();
    novo_fim -> num = dado;
    if(lista == NULL) { //unico elemento da lista
        lista = novo_fim;
        novo_fim -> prox = NULL;
    } else {
        no *aux = lista;

        while(aux -> prox != NULL) {
            aux = aux -> prox;
        }

        novo_fim -> prox = NULL;
        aux -> prox = novo_fim;
    }
    return lista;
}

void imprimir_lista(no *lista) {
    no *aux = lista;
    while(aux != NULL) {
        printf("%d", aux -> num);
        aux = aux -> prox;
    }
}

no *remover(no *lista, int dado) {
    if(lista == NULL)return NULL;//lista vazia

    no *temp = lista;
    no *prev = NULL;

    if(temp != NULL && temp -> num == dado) {
        lista = temp -> prox; //muda a cabeça da lista p/ o próx nó
        free(temp); //libera a memória do nó
        return lista;
    }

    while(temp != NULL && temp -> num != dado) {
        prev = temp;
        temp = temp -> prox;
    }

    if(temp == NULL) return lista;
    prev -> prox = temp -> prox;
    free(temp); //libera o nó
    return lista;
}

int main() {
    no *Lista = NULL;
    Lista = inserir_no_inicio(Lista, 2);
    Lista = inserir_no_inicio(Lista, 1);
    Lista = inserir_elemento_fim(Lista, 3);
    printf("Printando a lista original:");
    imprimir_lista(Lista);
    printf("\n");

    int num;
    printf("Digite o numero que vc deseja eliminar da face do codigo:");
    scanf("%d", &num);

    Lista = remover(Lista, num);

    printf("Como ficou apos a eliminacao do numero: ");
    imprimir_lista(Lista);

}
