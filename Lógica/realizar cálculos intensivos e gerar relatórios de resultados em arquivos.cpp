#include <stdio.h>
#include <stdlib.h>
#include <time.h> //bibliotecas sendo utilizadas

// Fun��o para calcular a primeira conta e gravar em arquivos
void CalcSalvar1(int num_files) {
    clock_t start_time = clock(); // Inicia a contagem do tempo

    // Loop para criar e calcular em cada arquivo
    for (int file_num = 1; file_num <= num_files; ++file_num) {
        char nome[50]; // Declara uma string para armazenar o nome do arquivo
        sprintf(nome, "first_method_output_%d.txt", file_num); // Formata o nome do arquivo
        FILE *file = fopen(nome, "w"); // Abre o arquivo para escrita

        // Verifica se o arquivo foi aberto corretamente
        if (file == NULL) {
            printf("Erro ao abrir o arquivo %s\n", nome);
            return;
        }

        long long int soma = 0; // Vari�vel para armazenar a soma
        // Loop para calcular a soma seguindo a primeira f�rmula
        for (long long int i = 1; i <= 500000000; ++i) {
            soma += (i * (i / 2));
        }

        fprintf(file, "Primeiro metodo: %lld\n", soma); // Escreve o resultado no arquivo

        fclose(file); // Fecha o arquivo
    }

    clock_t end_time = clock(); // Finaliza a contagem do tempo
    double tempoDec = ((double) (end_time - start_time)) / CLOCKS_PER_SEC; // Calcula o tempo decorrido em segundos

    printf("Tempo total decorrido para o primeiro m�todo: %.4f segundos\n", tempoDec); // Imprime o tempo decorrido
}

// Fun��o para calcular a segunda conta e gravar em arquivos
void CalcSalvar2(int num_files) {
    clock_t start_time = clock(); // Inicia a contagem do tempo

    // Loop para criar e calcular em cada arquivo
    for (int file_num = 1; file_num <= num_files; ++file_num) {
        char nome[50]; // Declara uma string para armazenar o nome do arquivo
        sprintf(nome, "second_method_output_%d.txt", file_num); // Formata o nome do arquivo
        FILE *file = fopen(nome, "w"); // Abre o arquivo para escrita

        // Verifica se o arquivo foi aberto corretamente
        if (file == NULL) {
            printf("Erro ao abrir o arquivo %s\n", nome);
            return;
        }

        long long int soma = 0; // Vari�vel para armazenar a soma
        // Loop para calcular a soma seguindo a segunda f�rmula
        for (long long int i = 1; i <= 500000000; ++i) {
            soma += (i * i) / 2;
        }

        fprintf(file, "Segundo m�todo: %lld\n", soma); // Escreve o resultado no arquivo

        fclose(file); // Fecha o arquivo
    }

    clock_t end_time = clock(); // Finaliza a contagem do tempo
    double tempoDec = ((double) (end_time - start_time)) / CLOCKS_PER_SEC; // Calcula o tempo decorrido em segundos

    printf("Tempo total decorrido para o segundo m�todo: %.4f segundos\n", tempoDec); // Imprime o tempo decorrido
}

// Fun��o para calcular a terceira conta e gravar em arquivos
void CalcSalvar3(int num_files) {
    clock_t start_time = clock(); // Inicia a contagem do tempo

    // Loop para criar e calcular em cada arquivo
    for (int file_num = 1; file_num <= num_files; ++file_num) {
        char nome[50]; // Declara uma string para armazenar o nome do arquivo
        sprintf(nome, "third_method_output_%d.txt", file_num); // Formata o nome do arquivo
        FILE *file = fopen(nome, "w"); // Abre o arquivo para escrita

        // Verifica se o arquivo foi aberto corretamente
        if (file == NULL) {
            printf("Erro ao abrir o arquivo %s\n", nome);
            return;
        }

        long long int soma = 0; // Vari�vel para armazenar a soma
        // Loop para calcular a soma seguindo a terceira f�rmula
        for (long long int i = 1; i <= 500000000; ++i) {
            soma += i * i / 2;
        }

        fprintf(file, "Terceiro m�todo: %lld\n", soma); // Escreve o resultado no arquivo

        fclose(file); // Fecha o arquivo
    }

    clock_t end_time = clock(); // Finaliza a contagem do tempo
    double tempoDec = ((double) (end_time - start_time)) / CLOCKS_PER_SEC; // Calcula o tempo decorrido em segundos

    printf("Tempo total decorrido para o terceiro m�todo: %.4f segundos\n", tempoDec); // Imprime o tempo decorrido
}

int main() {
    int num_files = 50; // N�mero de arquivos a serem criados para cada m�todo

    // Chamadas para cada fun��o de c�lculo e grava��o em arquivos
    printf("Realizando o metodo 1 em %d arquivos...\n", num_files);
    CalcSalvar1(num_files);

    printf("\nRealizando o metodo 2 em %d arquivos...\n", num_files);
    CalcSalvar2(num_files);

    printf("\nRealizando o metodo 3 em %d arquivos...\n", num_files);
    CalcSalvar3(num_files);

    printf("\nProcessamento concluido com sucesso!!\n");

    return 0;
}

