#include <stdlib.h> 
#include <stdio.h>  

int main(void){  
    int valor = 29;  // Vari�vel inteira com valor 29.
    int *ptr;  // Ponteiro para inteiro.
    ptr = &valor;  // Atribui��o do endere�o de "valor" ao ponteiro "ptr".
    
    // Impress�o de informa��es.
    printf("Conteudo da variavel %d \n", valor);  // Imprime o valor de "valor".
    printf("endereco da variavel %x \n", &valor);  // Imprime o endere�o de "valor".
    printf("Conteudo da variavel ponteiro %x \n", ptr);  // Imprime o conte�do de "ptr", que � o endere�o de "valor".
    
    return 0;  
}
