#include <stdio.h>
#include <stdlib.h> 
/*

1 Estado e atribuições

1.
"12 16" na 3 linha apesar de as alterações de x e y estarem na mesma linha já se utiliza o novo valor de x para calcular o y

2.
"0 ?" o y não está definido 

3.
a = 65 b = 32 c = 48 
"A 65"
a = 66 c = 50
"B 66 2 50"
c = 98 
"b 98"

4.
"100 200"

2 Estruturas de controlo 

1.
a) 
"3 5"

b)
"11 66"
 
x=3 y=6
x=4 y=10
x=5 y=15
x=6 y=21
x=7 y=28
x=8 y=36
x=9 y=45
x=10 y=55
x=11 y== 66

c) 
"_#_#_#_#_#_#_#_#_#_#"

d) não está terminado
"1
01
1
00
"
3 Programas iterativos 

1.*/

void quadrado (int n) {

    for (int l=0; l<=n; l++) {
        for (int c=0; c<=n; c++) {
            putchar("#");
        }
            putchar("\n"); 
      }  
   }

void xadrez (int n) {

    for (int l=0; l<=n; l++) {
        for (int c=0; c<=n; c++) {
            if(((c+l)%2) == 0)    
                putchar("#");
            else 
                putchar("_");
        }
            putchar(" ");
    }
}
