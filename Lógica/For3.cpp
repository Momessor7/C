//Faça um programa que receba o número sorteado por um dado de seis lados jogado
//vinte vezes. Mostre os números sorteados e a frequência com que apareceram.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dado[20];
    int frequencias[6] = {0};
        for (int i = 0; i < 20; i++) {
        printf("Preencha o numero do dado de 6 lados na jogada %d (1-6): ", i + 1);
        scanf("%d", &dado[i]);
        
        if (dado[i] < 1 || dado[i] > 6) {
            printf("Número inválido. Digite um número entre 1 e 6.\n");
            i--;
        } else {
            frequencias[dado[i] - 1]++;
        }
    }

    printf("\nNúmeros sorteados e suas frequências:\n");
    for (int i = 0; i < 6; i++) {
        printf("O número %d foi sorteado %d vez(es).\n", i + 1, frequencias[i]);
    }
    
    return 0;
}
