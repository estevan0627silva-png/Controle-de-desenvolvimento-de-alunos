#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void limpar_tela(){
    system("clear||cls");
}

void limpar_buffer(){
    int c;
    while((c = getchar())!= '\n' && c != EOF );
}

void pausar(){

    printf("\nPressione ENTER para continuar...");
    getchar();
    limpar_buffer();
}