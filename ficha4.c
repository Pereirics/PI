#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaVogais (char *s) {
    int i = 0;
    int contador = 0;
    while (s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'u') contador++;
        i++;    
    }    
    return contador;
}

int vogal (char s) {
    if (s == 'a' || s == 'A' || s == 'e' || s == 'E' || s == 'i' || s == 'I' || s == 'o' || s == 'u') return 1;
    else return 0;
}

int retiraVogaisRep (char *s) {
    int n_vogais = 0;
    char v[strlen(s)];
    int i = 0, j = 0;

    while (s[i] != '\0') {
    if (vogal(s[i]) == 0 || s[i-1] != s[i]) {
        v[j] = s[i];
        i++;
        j++;    
    }
    else {
        i++;
        n_vogais++;
        }    
    }
        v[j] = '\0';
        strcpy(s,v);

    return n_vogais;
}


int duplicaVogais (char *s) {
    char aux[100];
    int i = 0;
    int j = 0;
    int n_vogais = 0;

    while (s[i] != '\0') {
    if (vogal(s[i]) == 1) {
        n_vogais++;
        aux[j] = s[i];
        aux[j+1] = s[i];
        i++;
        j+=2;
    }
    else {
        aux[j] = s[i];
        i++;
        j++;
    }    
}
    strcpy(s,aux);
return n_vogais;
}

int ordenado (int v[], int N) {

    for (int i = 0 ; i < N; i++) {
        if (v[i] > v[i+1]) return 0;
    }
    return 1;
}

void merge (int a[], int na, int b[], int nb, int r[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    r[na+nb];

    while (k < (na+nb)){
    
     if (a[i] < b[j]) {
         r[k] = a[i];
         i++;
     }
     else {
         r[k] = b[j];
         j++;
     }
     k++;
}
}

void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
    putchar ('\n');
}

int partition (int v[], int N, int x) {
    int aux[N];
    int cont = 0;
    int j = N - 1;
    int l = 0;
   
    for (int i = 0; i < N; i++) {
        if (v[i] <= x) {
            aux[l] = v[i];
            cont++;
            l++;
        }
        else {
            aux[j] = v[i];
            j--;            
        }   
      
    }
    for (int m = 0; m < N; m++) {
        v[m] = aux [m];
    }
   return cont;
}


int main() {  
    int a [15] = {10, 3,45,56, 8,23,13,42,77,31,18,88,24,45, 1},
        b [10] = { 4,12,34,45,48,52,61,73,84,87}, 
        c [10] = { 1, 3, 8,22,33,35,38,41,44,49}, 
        d [50];
    int x[15];

     partition (a,15,30); 
     dumpV (a,15);
     return 1;
}