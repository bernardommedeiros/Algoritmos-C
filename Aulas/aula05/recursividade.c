#include <stdio.h>

int fatorial(int n) {
    // caso base, condição de parada
    if (n == 0) {
        return 1;
    } 
    else {
        return n * fatorial(n - 1);
        // modifica o parametro de entrada nessa nova chamada para que em algum momento ela pare
    }
}

int main() {
    int resultado = fatorial(5);
    printf("Fatorial: %d\n", resultado);

    return 0;
}