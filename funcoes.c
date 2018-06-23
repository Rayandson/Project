#include "funcoes.h"
#include <stdio.h>

void menu(void){
  printf("-------- opcoes -------\n\n");
  printf(" (1) Definir o tamanho da matriz A\n");
  printf(" (2) Definir o tamanho da matriz B\n");
  printf(" (3) Preencher a matriz A com valores aleatorios\n");
  printf(" (4) Preencher a matriz B com valores aleatorios\n");
  printf(" (5) Atribuir valores manualmente para os elementos da matriz A\n");
  printf(" (6) Atribuir valores manualmente para os elementos da matriz B\n");
  printf(" (7) Calcular A+B\n");
  printf(" (8) Calcular A-B\n");
  printf(" (9) Calcular A*B\n");
  printf("(10) Imprimir matriz A\n");
  printf("(11) Imprimir matriz B\n");
  printf("(12) Imprimir matriz C\n");
  printf("(13) Ler a matriz A de um arquivo\n");
  printf("(14) Ler a matriz B de um arquivo\n");
  printf("(15) Escrever a matriz C em um arquivo\n");
  printf("(16) Sair\n\n");
  printf("Digite sua operacao: ");
}

void lerMatriz(float mat[20][20], int m, int n)
{
        int i, j;
        for (i = 0; i < m; i = i + 1)
            for (j = 0; j < n; j = j + 1){
                printf("Linha %d coluna %d:", i+1, j+1);
                scanf("%f", &mat[i][j]);
            }
    }

void somarMatrizes(float a[20][20], float b[20][20],
       float c[20][20], int m, int n)
{
       int i, j;
       for (i = 0; i < m; i = i + 1)
           for (j = 0; j < n; j = j + 1) c[i][j] = a[i][j] + b[i][j];
}

void subtrairMatrizes(float a[20][20], float b[20][20],
       float c[20][20], int m, int n)
{
       int i, j;
       for (i = 0; i < m; i = i + 1)
           for (j = 0; j < n; j = j + 1) c[i][j] = a[i][j] - b[i][j];
}

void multiplicarMatrizes(float a[20][20], float b[20][20],
       float c[20][20], int l, int m, int n)
{
       int i, j, k;
       for (i = 0; i < l; i = i + 1)
       for (j = 0; j < m; j = j + 1){
            c[i][j] = 0.0;
            for (k = 0; k < n; k = k + 1)
            c[i][j] = a[i][k] * b[k][j] + c[i][j];
}
}


void escreverMatriz(float mat[20][20], float m, int n)
   {
       int i, j;
       for (i = 0; i < m; i = i + 1)
       {
           for (j = 0; j < n; j = j + 1)
           printf("%5.1f ", mat[i][j]);
           printf("\n");

       }
   }

