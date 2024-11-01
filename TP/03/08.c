#include <stdio.h>
 int main() { 

    char str1[100], str2[100], resultado[200]; 
    int cont1 = 0, cont2 = 0; 

    printf("Digite a primeira string: "); 
    scanf("%99s", str1); 

    printf("Digite a segunda string: "); 
    scanf("%99s", str2);

     while (str1[cont1] != '\0') { 
        resultado[cont1] = str1[cont2]; i++; 
        } 
     
      while (str2[cont1] != '\0') { 
        resultado[cont1] = str2[cont2];
        i++; 
        j++; 
        } resultado[cont1] = '\0'; 
        printf("%s\n", resultado);
        
         return 0;
          }