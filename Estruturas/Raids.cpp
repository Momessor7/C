#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

void raid0(char *input, char *disk1, char *disk2) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            disk1[i / 2] = input[i];
        } else {
            disk2[i / 2] = input[i];
        }
    }
    disk1[len / 2] = '\0';
    disk2[len / 2 + (len % 2 != 0)] = '\0';
}

void raid1(char *input, char *disk1, char *disk2) {
    strcpy(disk1, input);
    strcpy(disk2, input);
}

void raid4(char *input, char *disk1, char *disk2, char *paridade) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        if (i % 3 == 0) {
            disk1[i / 3] = input[i];
        } else if (i % 3 == 1) {
            disk2[i / 3] = input[i];
        } else {
            paridade[i / 3] = input[i] ^ disk1[i / 3] ^ disk2[i / 3];
        }
    }
    disk1[len / 3 + (len % 3 != 0)] = '\0';
    disk2[len / 3 + (len % 3 == 2)] = '\0';
    paridade[len / 3] = '\0';
}

void discoReconst(char *disk1, char *disk2, char *paridade, char *reconst) {
    int len1 = strlen(disk1);
    int len2 = strlen(disk2);
    for (int i = 0; i < len1; i++) {
        reconst[i] = paridade[i] ^ disk1[i] ^ disk2[i];
    }
    reconst[len1] = '\0';
}

int main() {
    char input[] = "eu odeio a aula de Arquitetura e Organizacao de Computadores";
    printf("Frase usada: eu odeio a aula de Arquitetura e Organizacao de Computadores\n");
    char disk1[MAX_LENGTH], disk2[MAX_LENGTH], paridade[MAX_LENGTH], reconst[MAX_LENGTH];

    // RAID 0
    raid0(input, disk1, disk2);
    printf("RAID 0:\nDisco 1: %s\nDisco 2: %s\n\n", disk1, disk2);

    // RAID 1
    raid1(input, disk1, disk2);
    printf("RAID 1:\nDisco 1: %s\nDisco 2: %s\n\n", disk1, disk2);

    // RAID 4
    raid4(input, disk1, disk2, paridade);
    printf("RAID 4:\nDisco 1: %s\nDisco 2: %s\nParidade: %s\n\n", disk1, disk2, paridade);

    // Reconstrução do disco a partir da paridade
    discoReconst(disk1, disk2, paridade, reconst);
    printf("Reconstrucao do disco: %s\n", reconst);

    return 0;
}

