#ifndef MATRICULA_H
#define MATRICULA_H
#define MAX_ALUNOS 50

typedef struct 
{
   int id;
   char nome[50];
   int idade;

}Matricula;

typedef struct  
{
  Matricula aluno;


}Turmas;


void matricular_aluno();
void listar_matriculas();
int gerar_id();
void listar_turmas();

#endif