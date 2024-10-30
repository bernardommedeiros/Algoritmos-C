// A array armazena uma coleção de elementos do mesmo tipo,  acessados pelo indice
// A declaração de um array em C é feita da seguinte forma: tipo nomeVar[tamanho];

// exemplo de declaração de array e acesso a um elemento:
#include <stdio.h>
int main (){
	int numeros[5] = {1, 2, 3, 4, 5};
	printf ("%d", numeros[0]);

	return 0;
}

// exemplo em aula:
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}

// exemplo maior elemento entre 10 números e o indice em que ele se encontra:

#include <stdio.h>
int main (int argc, char **argv){
	int i,maior,indiceMaior, x[10];
	for (i = 0 ; i < 10 ; i++){
		scanf("%d",&x[i]);
	}
    indiceMaior=0;
    maior=x[0];
	for (i = 1 ; i < 10 ; i++){
		if(x[i]>maior){
			indiceMaior=i;
			maior=x[i];
		}
	}
	printf("O maior elemento é %d e está no índice %d\n",maior,indiceMaior);
	return 0;
}
