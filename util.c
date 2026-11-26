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



