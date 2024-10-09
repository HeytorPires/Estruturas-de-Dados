// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

//Estrutura de cada Nó
struct Lista{
    int valor;
    struct Lista* next;
};

// função de criar nó
struct Lista* criaNO(int data){
    struct Lista* novoNO = (struct Lista*)malloc(sizeof(struct Lista));
    novoNO -> valor = data;
    novoNO -> next = NULL;
    return novoNO;
};

//inserir no inicio
void inserirInicio(struct Lista** cabeca, int data){
    struct Lista* novoNO = criaNO(data);
    novoNO -> next = *cabeca;
    *cabeca = novoNO;
};

// função de inserir Nó no final da lista 
void inserirFinal(struct Lista** cabeca, int data){
    struct Lista* novoNO = criaNO(data);
    if(*cabeca == NULL){
        *cabeca = novoNO;
        return;
    }
    struct Lista* temp = *cabeca;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = novoNO;
};

//função: inserir nó no meio (após um valor especifico)
void inserirMeio(struct Lista* cabeca, int value, int data){
    struct Lista* temp = cabeca;

    //procurar o valor da lista na lista 
    while(temp != NULL && temp->valor != value ){
        temp = temp->next;
    }

    // se o valor foi encontrado, insere o novo Nó
    if(temp != NULL){
        struct Lista* novoNO = criaNO(data);
        novoNO->next = temp->next;
        temp->next = novoNO;
    }else {
        printf("O valor %d não foi encontrado na lista.\n", value);
    }
};
    void ListarNO(struct Lista* cabeca){
        struct Lista* temp = cabeca;
        while(temp != NULL){
            printf("%d -> ", temp->valor);
            temp =  temp->next;
        }
        printf("Null\n");
    }



int main() {
   struct Lista* cabeca = NULL;

    // Inserindo n�s no in�cio
    inserirInicio(&cabeca, 10);
    inserirInicio(&cabeca, 20);
    inserirInicio(&cabeca, 30);

    printf("Lista apos insercoes no inicio:\n");
    ListarNO(cabeca);

    // Inserindo n� no final
    inserirFinal(&cabeca, 40);
    inserirFinal(&cabeca, 50);

    printf("\nLista apos insercoes no final:\n");
    ListarNO(cabeca);

    // Inserindo n� no meio, ap�s o valor 20
    inserirMeio(cabeca, 20, 25);

    printf("\nLista apos insercao no meio (apos o valor 20):\n");
    ListarNO(cabeca);


    return 0;
}