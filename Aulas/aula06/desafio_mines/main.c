#include <stdio.h>

int main(){
    int rows;
    int columns;
    int jogo[5][5] ={
        // -1 == bomba
        // 0 == identificar quantas bombas ao redor
        {0, -1, -1, 0, 0},
        {-1, 0, 0, -1, 0},
        {0, 0, 0, -1, -1},
        {0, -1, 0, 0, -1},
        {-1, 0, -1, 0, 0}
    };
       for (int rows = 0; rows < 5; rows++){
        for (int columns = 0; columns < 5; columns 5++){
            printf ("Posição:, %d, %d ", rows, columns);
            scanf("%d", &jogo[rows][columns]);
        }
       }
}