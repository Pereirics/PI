#include "function.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
    putchar ('\n');
}

int nota (Aluno a) {
    int r = 1;
    int soma = 0;

    for (int i = 0; i < 6 ; i++) soma += a.miniT[i];

    float media = soma * 20 / 12;
    float teste = a.teste;

    if ((media < 8) || (teste < 8)) r = 0;

    float nota = media * 0.3 + a.teste * 0.7;

    if (nota < 9.5) r = 0;

    return r;
}

float nota2 (Aluno a) {

    int soma = 0;

    for (int i = 0; i < 6 ; i++) soma += a.miniT[i];

    float media = soma * 20 / 12;
    float teste = a.teste;

    float nota = media * 0.3 + a.teste * 0.7;

    return nota;
}

int procuraNum (int num, Aluno t[], int N) {

    int indice = -1;
    for ( int i = 0; i<N; i++) {
        if (num == t[i].numero) indice = i;
    }
    return indice;
}

int ordenado (int v[], int N) {

    for (int i = 0 ; i < N; i++) {
        if (v[i] > v[i+1]) return 0;
    }
    return 1;
}

void ordenaPorNum (Aluno t[], int N) {

    int v[N];

    for (int j = 0; j<N; j++) {
        v[j] = t[j].numero;

    }

    int j = 0;
    int r;
    while(j <= N + 1) {
        for (int i = 0; i < N; i++) {
            int temp;
            if (t[i].numero > t[i + 1].numero) {
                temp = t[i].numero;
                t[i].numero = t[i + 1].numero;
                v[i] = t[i + 1].numero;
                t[i + 1].numero = temp;
                v[i + 1] = temp;
                j++;
                r = ordenado(v, N);
            }
        }
    }
}

void ordenaPorNome (Aluno t[], int N) {

    char* v[N];

    for (int j = 0; j<N; j++) {
        v[j] = t[j].nome;

    }

    int j = 0;
    while(j <= N + 1) {
        for (int i = 0; i < N; i++) {

            }
        }
    }
}

void criaIndPorNum (Aluno t [], int N, int ind[]) {

    int a = N;
    int v[a] ;

    for (int k = 0; k<N; k++) {
        v[k] = t[k].numero;
    }

    ordenaPorNum(t,N);

    int j = 0;
    int indi = 0;


    for (int i = 0; i<N; i++) {
        if (t[j].numero != v[i]) indi++;
        if (t[j].numero == v[i]) {
            ind[j] = indi;
            j++;
            i = -1;
            indi = 0;
        }
    }
}

void imprimeTurma (int ind[], Aluno t[], int N) {

    ordenaPorNum(t, N);

    for (int i = 0; i < N; i++) {
        printf("%d, %s, %.2f\n", t[i].numero, t[i].nome, nota2(t[i]));
    }
}

void criaIndPorNome (Aluno t [], int N, int ind[]) {

    int a = N;
    char* v[a] ;

    for (int k = 0; k<N; k++) {
        v[k] = t[k].nome;
    }

    ordenaPorNome(t,N);

    int j = 0;
    int indi = 0;


    for (int i = 0; i<N; i++) {
        if (t[j].nome != v[i]) indi++;
        if (t[j].nome == v[i]) {
            ind[j] = indi;
            j++;
            i = -1;
            indi = 0;
        }
    }
}
