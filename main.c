#include <stdio.h>
#include "funcoes.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
       int opcao, numLA = 21, numLB =21, numCA =21, numCB =21;
       float A[20][20], B[20][20], C[20][20];

       srand(time(NULL));

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
       while((numLB > 20) || (numCB > 20)){
       printf("Informe o numero de linhas da matriz B (Limite = 20 linhas): ");
       scanf("%d", &numLB);
       printf("Informe o numero de colunas da matriz B (Limite = 20 colunas): ");
       scanf("%d", &numCB);
       }
      break;
    case 3:
      for(int l=0;l<numLA;l++){
        for(int c=0;c<numCA;c++){
        A[l][c] = (rand()% 20);
    }
}
      break;
    case 4:
        for(int l=0;l<numLB;l++){
            for(int c=0;c<numCB;c++){
            B[l][c] = (rand()% 20);
    }
}
      break;
    case 5:
        printf("informe os valores da matriz A:\n");
           lerMatriz(A, numLA, numCA);
      break;
    case 6:
      printf("informe os valores da matriz B:\n");
           lerMatriz(B, numLB, numCB);
      break;
    case 7:
      if((numLA == numLB) && (numCA == numCB)){
      somarMatrizes(A, B, C, numLA, numCA);
      }
      else {
        printf("As matrizes possuem tamanhos diferentes portanto a soma nao pode ser efetuada. \n");
      }
      break;
    case 8:
      if((numLA == numLB) && (numCA == numCB)){
      subtrairMatrizes(A, B, C, numLA, numCA);
      }
      else {
        printf("As matrizes possuem tamanhos diferentes portanto a subtração nao pode ser efetuada. \n");
      }
      break;
    case 9:
      multiplicarMatrizes(A, B, C, numLA, numCB, numCA);
      break;
    case 10:
      escreverMatriz(A, numLA, numCA);
      break;
    case 11:
      escreverMatriz(B, numLB, numCB);
      break;
    case 12:
      escreverMatriz(C, numLA, numCB);
      break;
    case 13:
      printf("Opcao indisponivel no momento. \n");
      break;
    case 14:
      printf("Opcao indisponivel no momento. \n");
      break;
    case 15:
      printf("Opcao indisponivel no momento. \n");
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
