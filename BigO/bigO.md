# Complexidade de Algoritmos
<p> Um problema pode ser resolvido de diversas formas, cabe analisar a complexidade do código e encontrar a solução mais efetiva e performática, calculando a quantidade de passsos ou iterações que o algoritmo leva para ser executado do ínicio ao fim, no seu pior caso. A Big-O efetua essa ánalise do crescimento do tempo de execução do algoritmo com base nos valores de entrada </p>

## Principais complexidades

- Constante O(1): Tempo de execução do algoritmo é constante e <b> não depende da entrada </b>, assim, executa apenas a quantidade pré definida de operações.

- Linear O(n): Tempo de execução do algoritmo é constante e <b> cresce a depender do tamanho da entrada, linearmente </b>, assim, executa a quantidade operações iguais referente a quantidade da entrada.

- Logarítmica O(log n): O tempo cresce lentamente mesmo que a entrada aumente muito.

- Linearítmica O(n log n): Tempo de execução aumenta gradativamente enquanto a entrada cresce mais rápido, porém, enquanto há aumento da entrada o tempo da execução tambem aumenta.

- Quadradica O(n²): Tempo de execução proporcional ao quadrado do tamanho da entrada.

- Cúbica O(N³): Tempo de execução proporcional ao cubo do tamanho da entrada.



- Exponencial: Tempo de execução cresce exponencialmente comparado ao tamanho da entrada, tornando essa a complexidade menos eficiente.

## Forma simples de identificar complexidade:
<p> ignorar constantes e focar nas estruturas de repetição. </p>
<p> analisar os metodos inseridos existente da linguagem e analisar sua complexidade. </p>
<p> utilizar o termo de mair grau. </p>