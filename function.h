#ifndef FICHA5_PI_FUNCTION_H
#define FICHA5_PI_FUNCTION_H
#include <math.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

int nota (Aluno a);
int procuraNum (int num, Aluno t[], int N);
void ordenaPorNum (Aluno t [], int N);
int ordenado(int t[], int N);
void criaIndPorNum (Aluno t [], int N, int ind[]);
void dumpV (int v[], int N);
void imprimeTurma (int ind[], Aluno t[], int N);
void criaIndPorNome (Aluno t [], int N, int ind[]);

#endif //FICHA5_PI_FUNCTION_H
