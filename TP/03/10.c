Passo a Passo da Função de Busca Binária:
Inicialização de Variáveis:
inicio é o índice inicial do vetor, e fim é o índice final (tamanho - 1).
Loop while para Divisão Binária:
Enquanto inicio <= fim, o loop continua. Ele é responsável por dividir repetidamente o vetor ao meio, descartando metade a cada iteração, o que é a característica fundamental da busca binária.
Dentro do loop, a posição meio é calculada como inicio + (fim - inicio) / 2 para evitar overflow, que é a posição central do intervalo atual.
Condições de Comparação:
Se o elemento arr[meio] for igual ao alvo, a função retorna o índice meio.
Se arr[meio] for menor que o alvo, isso indica que o alvo está na metade direita do vetor, então o valor de inicio é ajustado para meio + 1.
Se arr[meio] for maior que o alvo, isso indica que o alvo está na metade esquerda do vetor, e o valor de fim é ajustado para meio - 1.
Elemento Não Encontrado:
Se o loop termina sem encontrar o elemento (ou seja, se inicio > fim), a função retorna -1, indicando que o elemento não está presente no vetor.
Quantidade de Operações (Complexidade de Tempo):
O algoritmo de busca binária divide o vetor em duas metades a cada iteração. A cada passo, o número de elementos que precisa ser considerado é reduzido pela metade. Se inicialmente temos n elementos, após uma iteração restarão n/2 elementos, depois n/4, e assim por diante. O número de iterações necessárias para reduzir o vetor a um único elemento é aproximadamente o logaritmo de n na base 2.

A quantidade de operações pode ser expressa da seguinte forma:

O loop while executa no máximo
log
⁡
2
n
log 
2
​	
 n iterações, já que o número de elementos é dividido pela metade a cada iteração.
Dentro do loop, a comparação e o cálculo do índice meio são operações constantes, 
O
(
1
)
O(1), em cada iteração.
Portanto, a complexidade de tempo do algoritmo é O(log n).

O que o algoritmo faz:
O algoritmo busca_binaria tem como objetivo encontrar o índice de um elemento específico (alvo) em um vetor ordenado. A busca binária funciona dividindo o vetor ao meio a cada iteração, descartando metade do vetor de forma eficiente até que o elemento desejado seja encontrado ou até que a busca se esgote.

Se o elemento for encontrado, o índice é retornado. Caso contrário, a função retorna -1, indicando que o elemento não existe no vetor.

Resumo:
Complexidade de tempo: 
O
(
log
⁡
n
)
O(logn).
O que o algoritmo faz: O algoritmo realiza uma busca binária em um vetor ordenado para encontrar o índice de um elemento específico. Ele divide o vetor pela metade a cada iteração, reduzindo o número de elementos a serem considerados de forma eficiente.