#include <stdio.h>
#include "util.h"

int main()
{
    int opcao = -1;

    do
    {

        limpar_tela();
        printf("1 - Matricular\n");
        printf("2 - Listar Turmas\n");
        printf("0 - Fechar\n");
        scanf("%d", &opcao);
        limpar_buffer();
        switch (opcao)
        {
        case 1:
            limpar_tela();
            
            pausar();
            break;
        
        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}