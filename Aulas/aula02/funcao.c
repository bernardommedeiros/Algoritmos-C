#include <stdio.h>

int main(int argc, char **argv) {
   int x = 10;
   int y = 20;
   int m = media(x,y);
   printf("A média de %d e %d é %d\n",x,y,m);
   return 0;
}

int media(int a, int b){
   int soma,media;
   soma = a+b;
   media = soma/2;
   return media;
}

// funções void geralmente modificam variaveis globais

// funções que retornam parametros, com variaveis locais modificando apenas o bloco da função