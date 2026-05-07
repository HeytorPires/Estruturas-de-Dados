
#include<stdio.h>
#include <stdlib.h>

int pesquisaBinaria(int *vetor, int pesquisa, int inicio, int fim){
    if(inicio <= fim){
        int meio = (inicio + fim) / 2;
        if(vetor[meio] == pesquisa){
            return meio;
        } else if(vetor[meio] < pesquisa){
            return pesquisaBinaria(vetor, pesquisa, meio + 1, fim);
        } else{
            return pesquisaBinaria(vetor, pesquisa, inicio, meio -1);
        }
    }else{
    return -1;
}    
}

void main(){
    int vetor[50] = {
        2, 4, 5, 6, 8, 10, 11, 12, 14, 15,
        17, 18, 20, 22, 23, 24, 25, 27, 28, 30,
        31, 33, 34, 35, 36, 38, 39, 40, 41, 42,
        43, 44, 45, 46, 47, 48, 49, 50, 52, 53,
        54, 55, 56, 57, 58, 59, 60, 61, 62, 63
    };
int pesquisa = 0;

printf("Informe  o valor da pesquisa: \n");
scanf("%d", &pesquisa);
int resultado = pesquisaBinaria(vetor, pesquisa, 0, 49);

if(resultado == -1){
    printf("\nValor nao encontrado!\n");
}else{
    printf("\nValor encontrado!\n");
}
}