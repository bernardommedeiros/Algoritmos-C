Passo a Passo:
Primeiro loop (i):
O primeiro loop (for (i = 0; i < n; i++)) inicia com i = 0 e vai até i < n, ou seja, ele executa n iterações (de i = 0 até i = n-1).
Segundo loop (j):
O segundo loop (for (j = 0; j < n; j++)) está aninhado dentro do primeiro e também faz n iterações (de j = 0 até j = n-1) para cada valor de i.
Operação interna (printf):
A operação interna do segundo loop é um simples printf("%d %d\n", i, j). Este comando é executado uma vez para cada iteração do segundo loop.
Quantidade de Operações:
O primeiro loop (i) executa n vezes.
Para cada iteração do primeiro loop, o segundo loop (j) executa n vezes.
Portanto, o número total de execuções do comando printf é dado por:

N
u
ˊ
mero total de opera
c
¸
o
˜
es
=
n
×
n
=
n
2
N 
u
ˊ
 mero total de opera 
c
¸
​	
  
o
˜
 es=n×n=n 
2
 
Ou seja, o comando printf é chamado n^2 vezes.

Complexidade:
A complexidade do algoritmo é determinada pelo número de operações executadas em função de n. Como o número total de operações é proporcional a 
n
2
n 
2
 , a complexidade de tempo é 
O
(
n
2
)
O(n 
2
 ).

O que o algoritmo faz:
O algoritmo recebe um valor n como argumento e imprime todos os pares de índices (i, j) onde i varia de 0 a n-1 e j também varia de 0 a n-1. Ou seja, ele imprime uma matriz de coordenadas (i, j) com dimensões 
n
×
n
n×n, ou seja, uma tabela de n^2 elementos, onde cada elemento é um par de números inteiros representando as posições de i e j nos loops.

Resumo:
Complexidade de tempo: 
O
(
n
2
)
O(n 
2
 ).
O que o algoritmo faz: Imprime todos os pares de índices (i, j) para i e j variando de 0 a n-1.