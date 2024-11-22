//Faça um programa que receba a temperatura média de cada mês do ano,
//armazenando-as em um vetor. Calcule e mostre a maior e a menor temperatura do ano e
//em que mês ocorreram (mostrar o mês por extenso: 1 – janeiro, 2 – fevereiro...).
//Desconsidere empates.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int temp[12];
    int maiorTemp = -1000, menorTemp = 1000; // Inicializando com valores extremos para garantir que as temperaturas reais sejam encontradas
    int mesMaior, mesMenor;

    // Recebe as temperaturas de cada mês
    for (int i = 0; i < 12; i++) {
        printf("Preencha a temperatura do mes %d: \n", i + 1);
        scanf("%d", &temp[i]);
    }

    //encontrando a maior e menor temperatura
    for (int i = 0; i < 12; i++) {
        if (temp[i] > maiorTemp) {
            maiorTemp = temp[i];
            mesMaior = i; // Armazenando o mês (índice) onde ocorreu a maior temperatura
        }
        if (temp[i] < menorTemp) {
            menorTemp = temp[i];
            mesMenor = i; // Armazenando o mês (índice) onde ocorreu a menor temperatura
        }
    }

    printf("\nA maior temperatura foi %d°C no mês %d.\n", maiorTemp, mesMaior + 1);
    printf("A menor temperatura foi %d°C no mês %d.\n", menorTemp, mesMenor + 1);

    char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("\nA maior temperatura do ano foi no mês de %s.\n", meses[mesMaior]);
    printf("A menor temperatura do ano foi no mês de %s.\n", meses[mesMe
