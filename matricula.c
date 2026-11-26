#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "matricula.h"


Matricula matricular_aluno(){
    Matricula matricular;
    static int id;
    id++;
    matricular.id = id;
    limpar_tela();
    printf("\nMatricula N-%2d",matricular.id);

    printf("\nNome do Aluno: ");
    scanf(" %49[^\n]",matricular.nome);
    limpar_buffer();

    printf("\nIdade do Aluno ");
    scanf("%d",&matricular.idade);
    limpar_buffer();

    pausar();

    return  matricular;
}