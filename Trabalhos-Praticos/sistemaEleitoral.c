#include <stdio.h>
int main() {

    int voto;
    int C1;
    int C2;
    int C3;
    int saida;

C1 = 1;
C2 = 2;
C3 = 3;
saida = 100;

while (1){
    printf ("Para encerrar o programa digite 100 \n");
    printf ("Para votar no primeiro candidato digite 1, no segundo candidato digite 2 e no terceiro candidato digite 3. \n");
    printf ("Escolha seu candidato:");
    scanf("%d", &voto);  
    
    if (voto == C1){
        printf ("Seu voto no primeiro candidato foi cadastrado");
    }
    else if (voto == C2){
        printf ("Seu voto no segundo candidato foi cadastrado");
    }
    else if (voto == C3){
        printf ("Seu voto no terceiro candidato foi cadastrado");
    }
    else if (saida){
        printf("O programa foi encerrado");
        break;
    }
}

return 0;
}

// Crie um programa que resolva equações quadráticas (ax² + bx + c = 0). Utilize if-else para determinar o número de raízes reais.

#include <stdio.h>
int main() {

    int a;
    int b;
    int x;
    int c;
    int calc;

    printf("A:");
    scanf("%d", &a);

    printf("B:");
    scanf("%d", &b);

    printf("X:");
    scanf("%d", &b);    

    printf("C:");
    scanf("%d", &c); 

    calc = (a*(x*2)+ b*x + c);
    
    if (calc < 0){
        printf("0");
        }

    else if (calc == 0){  
        printf("1");
    }
    else{
        printf("2");
    }

    return 0;
    }
        
