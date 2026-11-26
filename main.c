#include <stdio.h>
#include "util.h"
#include "matricula.h"

int main()
{
    int opcao;
    FILE *file;
    Matricula matricular;

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
            file = fopen("Alunos.txt", "ab");

            if (file == NULL)
            {
                printf("ERRO AO CARREGAR ARQUIVO!");
                return (1);
            }

            matricular = matricular_aluno();
            fwrite(&matricular, sizeof(matricular), 1, file);
            fclose(file);

            break;

        case 2:
            file = fopen("Alunos.txt", "rb");
            if (file == NULL)
            {
                printf("Nenhuma matricula encontrada (arquivo inexistente).\n");
                pausar();
                break;
            }
            listar_matriculas(file);
            fclose(file);
            break;

        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}