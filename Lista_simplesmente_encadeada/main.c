// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* criaNO(int data){
    struct Node* novoNO = (struct Node*)malloc(sizeof(struct Node));
    novoNO -> data = data;
    novoNO -> next = NULL;
    return novoNO;
};

//inserir no iniciop
void inserirInicio(struct Node** cabeca, int data){
    struct Node* novoNO = criaNO(data);
    novoNO -> next = *cabeca;
    *cabeca = novoNO;
}


int main() {
    // Write C code here
    printf("Try programiz.pro");

    return 0;
}