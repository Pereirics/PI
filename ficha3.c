#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
1.
a)
    1 1 4
    2 2 6
    3 3 8
    4 4 10
    5 5 12

b)
a = 3 b = 5
i = 4
a = 4
j = 4 + 5 = 9
b = 4
j = 9 + 4 = 13
13
*/

//2.
void swapM (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//3.
void swap (int v[], int i, int j) {
  
  int temp1 = v[i];
  int temp2 = v[j];

    v[i] = temp2;   
    v[j] = temp1;
}

//4.
int soma (int v[], int N) {
    int Nelem = N;
    int elem = 0,
        soma = 0;
    while (Nelem != 0) {
        Nelem--;
        soma += v[elem];
        elem++;
    }
    return soma;
}

//5.
void inverteArray (int v[], int N) {
    for (int i=0; i<N; i++, N--){
        swapM(v + i, v + (N-1));
    }
}

//Imprime array
void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
    putchar ('\n');
}

//6.
int maximum (int v[], int N, int *m) {
    int temp = v[0];
    int i = 1;
    int r = 1;
    if (N > 0) {
    for (i = 1; i < N; i++) {
        if (v[i] > temp) temp = v[i];
        i++; 
    }
    *m = temp;
    r = 0;
    }
    return r;
}

//7. não compila por causa do pow
/*
void quadrados (int q[], int N) {
    int a = 0, i = 1;
    q[0]=0;
    while (a != (N+1)) {
        q[i] = pow(a,2) + (2*a+1);
        i++;
        a++;
    }
} */

//8.
//a)
void pascal (int v[], int N) {
    for(int i=0; i<N; i++){
        v[i] = 1;
        for(int j=i-1; j>0; j--){
            v[j] += v[j-1];
        }
    }
}

//b)
void pascal1 (int N) {
    int v[100];
    for(int i=0; i<N; i++){
        v[i] = 1;
        printf("%d ",v[i]);
        if (i == N-1) putchar ('\n');
        for(int j=i-1; j>0; j--){
            v[j] += v[j-1];
            printf("%d ",v[j]);
        }
    }
}

int main() {
    
    pascal1 (10);

    return 0;
}