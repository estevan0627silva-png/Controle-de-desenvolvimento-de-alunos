#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void limpar_tela(void) {
    system("clear || cls");
}

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pausar(void) {
    printf("\nPressione ENTER para continuar...");
    getchar();
}

void remover_quebra_linha(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }
}



