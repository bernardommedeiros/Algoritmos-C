#include <stdio.h>
 int main() { 
    int n, k; 
    printf("Escolha a quantidade de alunos: "); 
    scanf("%d", &n);
    printf("Escolha a quantidade de provas: "); 
    scanf("%d", &k);
    float pesos[k]; 
    printf("Pesos das provas: "); 
    for (int i = 0; i < k; i++) { 
        scanf("%f", &pesos[i]); 
        }

    float notas[n][k]; 
    float medias_ponderadas[n];

    for (int i = 0; i < n; i++) {
        printf("Notas do aluno %d:", i + 1); 
        float soma_ponderada = 0;
        float soma_pesos = 0; 
        for (int j = 0; j < k; j++) {
        scanf("%f", &notas[i][j]); 
        soma_ponderada += notas[i][j] * pesos[j]; 
        soma_pesos += pesos[j];
    }
    medias_ponderadas[i] = soma_ponderada / soma_pesos; 
}

float medias_provas[k];
 for (int j = 0; j < k; j++) {
     float soma_notas = 0; 
     for (int i = 0; i < n; i++) { 
        soma_notas += notas[i][j]; 
        } 
        medias_provas[j] = soma_notas / n;
    }

printf("\nMédias ponderadas dos alunos:"); 
for (int i = 0; i < n; i++) { 
    printf("Aluno %d: %.2f", i + 1, medias_ponderadas[i]); 
}

printf("\nMédias aritméticas das provas:"); 
for (int j = 0; j < k; j++) {
     printf("Prova %d: %.2f", j + 1, medias_provas[j]);
      } 
      return 0;
}