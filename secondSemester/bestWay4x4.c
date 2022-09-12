
/*
Desenvolver um programa para resolver as seguintes questões de um labirinto de 4 linhas por 4 colunas (matriz 4 por 4).
- Ler todos os valores da matriz (16 valores)  entre 0 e 20 cada posição
- Informar se tem um caminho da coluna 0 até a coluna 3.  O caminho é considerado quando existe conexão com valor diferente de 0 na posição adjacente a posição atual
- Informar a soma de valores de cada linha e informar qual linha tem a maior soma.
*/

#include <stdio.h>

int main()
{
  int array[4][4] = {
    {1, 2, 5, 0},
    {0, 4, 9, 3},
    {5, 4, 6, 4},
    {0, 1, 4, 5}
  };
};