// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

//Estrutura de cada Nó
struct Node{
    int data;
    struct Node* next;
};

// função de criar nó
struct Node* criaNO(int data){
    struct Node* novoNO = (struct Node*)malloc(sizeof(struct Node));
    novoNO -> data = data;
    novoNO -> next = NULL;
    return novoNO;
};

//inserir no inicio
void inserirInicio(struct Node** cabeca, int data){
    struct Node* novoNO = criaNO(data);
    novoNO -> next = *cabeca;
    *cabeca = novoNO;
};

// função de inserir Nó no final da lista 
void inserirFinal(struct Node** cabeca, int data){
    struct Node* novoNO = criaNO(data);
    if(*cabeca == NULL){
        *cabeca = novoNO;
        return;
    }
    struct Node* temp = *cabeca;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = novoNO;
};

//função: inserir nó no meio (após um valor especifico)
void inserirMeio(struct Node* cabeca, int value, int data){
    struct Node* temp = cabeca;

    //procurar o valor da lista na lista 
    while(temp != NULL && temp->data != value ){
        temp = temp->next;
    }

    // se o valor foi encontrado, insere o novo Nó
    if(temp != NULL){
        struct Node* novoNO = criaNO(data);
        novoNO->next = temp->next;
        temp->next = novoNO;
    }else {
        printf("O valor %d não foi encontrado na lista.\n", value);
    }
};
    void ListarNO(struct Node* cabeca){
        struct Node* temp = cabeca;
        while(temp != NULL){
            printf("%d -> ", temp->data);
            temp =  temp->next;
        }
        printf("Null\n");
    }



int main() {
   struct Node* cabeca = NULL;

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