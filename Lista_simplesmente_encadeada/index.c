#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* proxNO; 
};

struct Node* CreateNode(int data){
    struct Node* novoNO = (struct Node*)malloc(sizeof(struct Node));
    novoNO -> data = data;
    novoNO -> proxNO = NULL;
    return novoNO;
};


void inserirNoFinal(struct Node** cabeca, int data){
    struct Node* novoNO = CreateNode(data);
    if(*cabeca == NULL){
        *cabeca = novoNO;
        return;
    }
    struct Node* tempNode = *cabeca;
    while (tempNode->proxNO != NULL){
        tempNode = tempNode->proxNO;
    }
    tempNode->proxNO = novoNO;

};
void ImprimirNode(struct Node* cabeca){
        struct Node* temp = cabeca;
        while(temp != NULL){
            printf("%d -> ", temp->data);
            temp =  temp->proxNO;
        }
        printf("Null\n");
    }


int main(){

    struct Node* cabeca = NULL;

    inserirNoFinal( &cabeca, 10);
    ImprimirNode(cabeca);
    inserirNoFinal(&cabeca, 20);
    printf("Listando de novo\n");
    ImprimirNode(cabeca);
    return 0;
}