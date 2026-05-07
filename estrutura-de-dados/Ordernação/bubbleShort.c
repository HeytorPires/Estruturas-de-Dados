#include<stdio.h>
#include <stdlib.h>

void bubbleshort(int *vetor, int tamanho){
    int atual, indice, auxiliar = 0;

    for(atual = 1; atual < tamanho; atual++){
        for(indice=0; indice < tamanho -1; indice++){
            if(vetor[indice] > vetor[indice + 1]){
                auxiliar = vetor[proximo];
                vetor[indice] = vetor[indice + 1];
                vetor[indice + 1] = auxiliar; 
            }
        }
    }
}

void main(){

    int vetor[10] = {58,46,75,11,26,35,34,17,77,99};
    int tamanho = sizeof(vertor) / sizeof(vetor[0]);
    int i;
    printf("Lista antes de ordenar: \n");
    for(i = 0; i < tamanho; i++){
        printf("[%d]", vetor[i]);
    }

    bubbleshort(vetor, 10);

    printf("\nLista ordenada: \n");
    for(i = 0; i < tamanho; i++){
        printf("[%d]", vetor[i]);
    }

}