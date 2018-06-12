#include <stdio.h>
#include "funcoes.h"
#include <stdlib.h>

int main(void)
{
       int opcao, numLA = 21, numLB =21, numCA =21, numCB =21;
       float m1[20][20], m2[20][20], m3[20][20];

       do{
    menu();
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
       while((numLA > 20) || (numCA > 20)){
       printf("Informe o numero de linhas da matriz A (Limite = 20 linhas): ");
       scanf("%d", &numLA);
       printf("Informe o numero de colunas da matriz A (Limite = 20 colunas): ");
       scanf("%d", &numCA);
       }
        break;
    case 2:
      printf("Informe o numero de linhas da matriz B: ");
       scanf("%d", &numLB);
       printf("Informe o numero de colunas da matriz B: ");
       scanf("%d", &numCB);
      break;
    case 3:
      printf("fat  = %d\n");
      break;
    case 4:
      printf("fat  = %d\n");
      break;
    case 5:
        printf("informe os valores da matriz A:\n");
           lerMatriz(m1, numLA, numCA);
      break;
    case 6:
      printf("informe os valores da matriz B:\n");
           lerMatriz(m2, numLB, numCB);
      break;
    case 7:
      somarMatrizes(m1, m2, m3, numLA, numCA);
      printf("Matriz A + Matriz B = \n");
      escreverMatriz(m3, numLA, numCA);
      break;
    case 8:
      subtrairMatrizes(m1, m2, m3, numLA, numCA);
      printf("Matriz A - Matriz B = \n");
      escreverMatriz(m3, numLA, numCA);
      break;
    case 9:
      printf("fat  = \n");
      break;
    case 10:
      printf("fat  = %d\n");
      break;
    case 11:
      printf("fat  = %d\n");
      break;
    case 12:
      printf("fat  = %d\n");
      break;
    case 13:
      printf("fat  = %d\n");
      break;
    case 14:
      printf("fat  = %d\n");
      break;
    case 15:
      printf("fat  = %d\n");
      break;
    case 16:
      exit(0);
    default:
      printf("opcao inexistente\n");
      break;
    }
  }while(1);

    return 0;
}
