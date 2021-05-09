#include <stdlib.h>
#include <stdio.h>

float multInt1 (int n, float m) {
    float r;
    int s = 0;
    while (r!=(n*m)) {
        r = s * m;
        s = s + 1;
    }
  return r;
}

float multInt2 (int n, float m) {
    int nimpares = 0,
        contador = 0;

    while(n!=0) {
       if (n%2 != 0) {
        nimpares = nimpares + m;
        }
       contador ++;  
       n = n / 2;
       m = m * 2; 
    }    
  return nimpares;
}

//fatorizar os números ao dividir por números primos (2,3,5,7,11,13,...)
//os números iguais usados na fatorização de a e b multiplicam-se e obtém-se o mdc
// OU
//dividir a e b pelo valor menor entre os dois e ir tirando 1 ao menor até o resto da divisão de ambos por esse menor ser 0 dando assim o maior divisor comum
int mdc1 (int a, int b) {

  int menor,r;
  
  if (a<b) (menor = a);
  else menor = b;

  while (menor>0) {
    if (a % menor == 0 && b % menor == 0) {
      r = menor;
      menor = 0;
    }
    menor--;
  }
  return r;
}

//retirar o valor do menor ao maior até um deles dar 0
//Exemplo: 126 e 45 -> 126-45 = 81 -> 81-45 = 36 -> ... o resultado do que não é 0 é o mdc

int mdc2 (int a,int b) {

  int r,menor,maior,hold;
  
  while ((a != 0 || b != 0) && (a>0 && b>0)) {
    if (a<b) {
     menor=a ;
     maior=b;
    }
    else {
     menor=b;
     maior=a;
     }
    if (maior-menor < menor) {
      hold = menor;
      menor = maior - menor;
      maior = hold;
      r = maior;
      a = maior;
      b = menor;
    } 
    else {
    maior = maior - menor;
    r = maior;
    a = maior;
    b = menor;
  }
  
 }
 return r;
} 

long int fib1 (int n) {
 
   if (n<2)
    return n;

   else 
     return(fib1 (n - 1) + fib1 (n - 2));
}
/*
long int fib2 (int n) {

  long int ant1, ant2;
  int r;

  if (n<2)
    return n;
  else 
    for (r=0; r!=n; r++)
    return (ant1+ant2);

}

int main() {

  int a;

  scanf("%d",&a);
  printf("%ld",fib2(a));

  return 0;
}
*/