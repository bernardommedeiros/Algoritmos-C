// A array armazena uma coleção de elementos do mesmo tipo,  acessados pelo indice
// A declaração de um array em C é feita da seguinte forma: tipo nomeVar[tamanho];

#include <stdio.h>
int main (int argc, char **argv){
	int i, x[10];
	for (i = 0 ; i < 10 ; i++){
		scanf("%d",&x[i]);
	}
	for (i = 0 ; i < 10 ; i++){
		printf("%d ",x[i]);
	}
	return 0;
}