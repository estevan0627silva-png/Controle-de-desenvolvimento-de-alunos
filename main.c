#include <stdio.h>
#include "util.h"
#include "matricula.h"

int main()
{
    int total_alunos = 0;


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
            matricular_aluno();
            
           
            break;
        case 2:
            

            break;
        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}