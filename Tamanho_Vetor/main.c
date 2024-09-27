#include <stdio.h>
#include <stdlib.h>


int main(){

    int Vetor[5] = {1,2,3,4,5};

    int tamanho_Vetor = sizeof(Vetor) / sizeof(Vetor[0]);

    printf("O tamanho do vetor é de %d elementos!", tamanho_Vetor);

    return 0;
}