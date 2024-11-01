#include <stdio.h>
 #include <string.h>
 
 int main() { 
    char frase[100]; 
    char palavra[100]; 
    int contador = 0;
    char *pos; 
     
     printf("Digite uma frase: "); 
     scanf(" %[^\n]s", frase);
     
      printf("Digite uma palavra: "); 
      scanf("%99s", palavra); pos = frase; 
      while ((pos = strstr(pos, palavra)) != NULL) { 
        contador++; 
        pos += strlen(palavra); 
        } 
        
    printf("A palavra '%s' ocorre %d vezes na frase.\n", palavra, contador); 
    
    return 0;
 }