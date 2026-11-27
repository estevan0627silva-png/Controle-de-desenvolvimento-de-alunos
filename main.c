#include <stdio.h>
#include "util.h"
#include "matricula.h"

int main()
{
    int opcao;


    do
    {
        limpar_tela();
        printf("1 - Matricular\n");
        printf("2 - Listar Alunos\n");
        printf("3 - Listar Turmas\n");
        printf("0 - Fechar\n");
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao)
        {
        case 1:
          
           matricular_aluno();
          
            break;

        case 2:
            
            listar_matriculas();
            
            break;
        
        case 3:

            listar_turmas();

        break;

        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}