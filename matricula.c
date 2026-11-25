#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "matricula.h"


void matricular_aluno(matricula turma[], int *total_alunos ){

    
    limpar_tela();
    printf("Matricula: N-%0.2d",turma[*total_alunos].matricula++ );

    printf("Nome: ");
    fgets(turma[*total_alunos].nome, sizeof(turma[*total_alunos].nome), stdin);
    remover_quebra_linha(turma[*total_alunos].nome);

    printf("Idade: ");
    scanf("%d",&turma[*total_alunos].idade)

    

}
