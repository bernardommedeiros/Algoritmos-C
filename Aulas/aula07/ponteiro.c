// ponteiro = armazena o endereço de memória 
// são utilizados para acessar e manipular variáveis indiretamente
// &var para atribuir o endereço de memória de uma variavel ao ponteiro
// *ponteiro para acessar o valor da variavel através do ponteiro 

#include <stdio.h>

int main() {
    int var = 10;
    int *pont = &var;
    *pont = *pont * 2;
    printf ("%d", *pont);
}



