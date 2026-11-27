#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "matricula.h"



static const char *categoria_ibjjf(int idade)
{
    if (idade >= 4 && idade <= 6)   return "Mirim (4-6 anos)";
    if (idade >= 7 && idade <= 9)   return "Fraldinha (7-9 anos)";
    if (idade >= 10 && idade <= 12) return "Infantil (10-12 anos)";
    if (idade >= 13 && idade <= 15) return "Infanto-Juvenil (13-15 anos)";
    if (idade >= 16 && idade <= 17) return "Juvenil (16-17 anos)";
    if (idade >= 18 && idade <= 29) return "Adulto (18-29 anos)";
    if (idade >= 30 && idade <= 35) return "Master 1 (30-35 anos)";
    if (idade >= 36 && idade <= 40) return "Master 2 (36-40 anos)";
    if (idade >= 41 && idade <= 45) return "Master 3 (41-45 anos)";
    if (idade >= 46 && idade <= 50) return "Master 4 (46-50 anos)";
    if (idade >= 51 && idade <= 55) return "Master 5 (51-55 anos)";
    if (idade >= 56 && idade <= 60) return "Master 6 (56-60 anos)";
    if (idade >= 61)                return "Master 7+ (61+ anos)";

    return "Fora das categorias (<4 anos)";
}



void matricular_aluno()
{

    FILE *file = fopen("Alunos.txt", "ab");

    if (file == NULL)
    {
        printf("ERRO AO CARREGAR ARQUIVO!");
    }

    Matricula matricular;
    

    matricular.id = gerar_id();
    limpar_tela();
    printf("\nMatricula N-%02d", matricular.id);

    printf("\nNome do Aluno: ");
    scanf(" %49[^\n]", matricular.nome);
    limpar_buffer();

    printf("\nIdade do Aluno ");
    scanf("%d", &matricular.idade);
    limpar_buffer();

    
    fwrite(&matricular, sizeof(matricular), 1, file);
    fclose(file);
    
    printf("\nAluno matriculado na turma: %s\n",categoria_ibjjf(matricular.idade));
    pausar();
}

void listar_matriculas()
{
    FILE *file = fopen("Alunos.txt", "rb");
    if (file == NULL)
    {
        printf("Nenhuma matricula encontrada (arquivo inexistente).\n");
    }

    else
    {

        Matricula matricular;
        limpar_tela();
        while (fread(&matricular, sizeof(matricular), 1, file) == 1)
        {

            printf("\n%s", matricular.nome);
            printf("\nMatricula N-%02d ", matricular.id);
            printf("\nIdade:%02d", matricular.idade);
            printf("\n\n");
        }
    }
        fclose(file);
    pausar();
}

int gerar_id()
{
    FILE *file = fopen("Alunos.txt","rb");
    if (file == NULL)
    {
       printf("Nenhuma matricula encontrada (arquivo inexistente).\n");
       return 1;
    }

    Matricula matriculados;
    int maior_id =0;

    while (fread(&matriculados,sizeof(matriculados),1,file)==1)
    {
       if (matriculados.id > maior_id)
       {
        maior_id = matriculados.id;
       }
    }
    return maior_id + 1;
    
}

void listar_turmas(){

    const char *turmas[] = {
        "Mirim (4-6 anos)",
        "Fraldinha (7-9 anos)",
        "Infantil (10-12 anos)",
        "Infanto-Juvenil (13-15 anos)",
        "Juvenil (16-17 anos)",
        "Adulto (18-29 anos)",
        "Master 1 (30-35 anos)",
        "Master 2 (36-40 anos)",
        "Master 3 (41-45 anos)",
        "Master 4 (46-50 anos)",
        "Master 5 (51-55 anos)",
        "Master 6 (56-60 anos)",
        "Master 7+ (61+ anos)",
        "Fora das categorias (<4 anos)"
    };
    int total_turmas = sizeof(turmas) / sizeof(turmas[0]);
    

    FILE *file = fopen("Alunos.txt", "rb");
    if (file == NULL)
    {
        printf("Nenhuma matricula encontrada (arquivo inexistente).\n");
        pausar();
        return;
    }
     
    limpar_tela();
    printf("=== TUMAS POR CATEGORIA ===\n\n");

    for (int i = 0; i < total_turmas; i++)
    {
        Matricula aluno;
        int encontrou = 0;


        while (fread(&aluno,sizeof(aluno),1,file) == 1)
        {
            
        }
        
    }
    






}