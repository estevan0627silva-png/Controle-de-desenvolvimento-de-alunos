#ifndef MATRICULA_H
#define MATRICULA_H
#define MAX_ALUNOS 50

typedef struct 
{
   int matricula;
   char nome[60];
   int idade;

}matricula;

void matricular_aluno(matricula turma[], int *total_alunos );

#endif