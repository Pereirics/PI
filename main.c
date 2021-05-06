#include <stdio.h>
#include "function.h"
#include <math.h>



int main() {
    Aluno Turma1 [7] = {{4444, "André", {2,1,0,2,2,2}, 10.5}
            ,{3333, "Paulo", {0,0,2,2,2,1},  8.7}
            ,{8888, "Carla", {2,1,2,1,0,1}, 14.5}
            ,{2222, "Joana", {2,0,2,1,0,2},  3.5}
            ,{7777, "Maria", {2,2,2,2,2,1},  5.5}
            ,{6666, "Bruna", {2,2,2,1,0,0}, 12.5}
            ,{5555, "Diogo", {2,2,1,1,1,0},  8.5}
    } ;
    int a = nota(Turma1[1]);
    int indNum[7];
    int indNome[7];

   // printf("%d",a);
   // printf ("procura 5555:%d \n",  procuraNum (5555, Turma1, 7));
   // printf ("procura 9999:%d \n",  procuraNum (9999, Turma1, 7));
   // ordenaPorNum (Turma1, 7);
   //  criaIndPorNum (Turma1, 7, indNum);
   // dumpV(indNum,7);
   //imprimeTurma (indNum, Turma1, 7);
    criaIndPorNome (Turma1, 7, indNome);
    dumpV(indNome,7);

   return 0;
}

