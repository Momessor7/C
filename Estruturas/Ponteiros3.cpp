#include <stdlib.h>
#include <stdio.h>

int main(){

    // Declarando vari�veis
    int x, *ptrx, **pptrx;
    x = 0;

    // Imprimindo o valor e endere�o de x
    printf("Valor de X: %d\n", x);   
    printf("Endereco de X: %x\n", &x);   

    // Atribuindo o endere�o de x ao ponteiro ptrx
    ptrx = &x;

    // Atribuindo o endere�o de ptrx ao ponteiro duplo pptrx
    pptrx = &ptrx;

    // Incrementando o valor de x atrav�s de ptrx
    *ptrx = *ptrx + 10;
    printf("\n Valor de x = %d", x);
    printf("\nEndereco apontado por ptrx: %x\n", ptrx);  
    printf("\nValor da variavel X que esta sendo apontada por ptrx: %d\n", *ptrx);    
    printf("\nEndereco de memoria da variavel ptrx: %x\n", &ptrx);

    // Incrementando o valor de x atrav�s de **pptrx
    **pptrx = **pptrx + 10;
    printf("\n Valor de x = %d", x);
    printf("\nEndereco apontado por **pptrx: %x\n", pptrx);  
    printf("\nValor da variavel para a qual pptrx faz referencia: %d", **pptrx);    
    printf("\nEndereco de memoria da variavel **pptrx: %x\n\n", &pptrx);

    return 0;
}
