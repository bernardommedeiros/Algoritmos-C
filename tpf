#include <stdio.h> //1
#include <math.h> //1
    struct Ponto {  //1 
    float x; //1
    float y; //1
  };

  float distancia(struct Ponto p1, struct Ponto p2) { //3

    float resultado; //1
    resultado = ((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y)); //
    resultado = sqrt(resultado); //2
    return (resultado); //1
  }

  int main() {

    struct Ponto p1, p2; //1

    printf("Digite o X do primeiro ponto: ");
    scanf("%f", &p1.x);

    printf("Digite o Y do primeiro ponto: ");
    scanf("%f", &p1.y);

    printf("Digite o X do segundo ponto: ");
    scanf("%f", &p2.x);

    printf("Digite o Y do segundo ponto: ");
    scanf("%f", &p2.y);
    printf("A distância é: %2f\n", distancia(p1, p2));
  
    distancia(p1, p2); //1
    return 0; //1
  }
