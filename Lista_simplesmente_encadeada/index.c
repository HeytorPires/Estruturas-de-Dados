#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int valor;
    struct Lista* proxNO; 
};
//Cria o nó da Lista
struct Lista* CreateNode(int valor){
    struct Lista* novoNO = (struct Lista*)malloc(sizeof(struct Lista));
    novoNO -> valor = valor;
    novoNO -> proxNO = NULL;
    return novoNO;
};

// insere ao final da lista um novo Nó(Registro)
void inserirNoFinal(struct Lista** cabeca, int valor){
    struct Lista* novoNO = CreateNode(valor);
    if(*cabeca == NULL){
        *cabeca = novoNO;
        return;
    }
    struct Lista* tempNode = *cabeca;
    while (tempNode->proxNO != NULL){
        tempNode = tempNode->proxNO;
    }
    tempNode->proxNO = novoNO;

};
void ImprimirNode(struct Lista* cabeca){
        struct Lista* temp = cabeca;
        while(temp != NULL){
            printf("%d -> ", temp->valor);
            temp =  temp->proxNO;
        }
        printf("Null\n");
    }


int main(){

    struct Lista* cabeca = NULL;

    inserirNoFinal( &cabeca, 10);
    ImprimirNode(cabeca);
    inserirNoFinal(&cabeca, 20);
    printf("Listando de novo\n");
    ImprimirNode(cabeca);
    return 0;
}