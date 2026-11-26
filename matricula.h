#ifndef MATRICULA_H
#define MATRICULA_H
#define MAX_ALUNOS 50

typedef struct 
{
   int id;
   char nome[50];
   int idade;

}Matricula;

Matricula matricular_aluno();
Matricula listar_matriculas(FILE *y);

#endif