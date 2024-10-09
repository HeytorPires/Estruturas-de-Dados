#include <stdio.h>
#define maxtam 100

struct pilha
{
   int itens[maxtam];
   int topo;
};

void inicializar(struct pilha* p){
    p -> topo = -1;
}

int cheia(struct pilha *p){
    return p-> topo == maxtam -1;
}
int vazia (struct pilha *p){
    return p -> topo == -1;
}

void empilhar(struct pilha *p, int valor){
    if(cheia(p)){
        printf("tá Cheio \n");
    } else {
        p->topo ++;
        p->itens[p->topo] = valor;
        printf("\nElemento %d empilhado", valor);
    }
}

int desempilhar(struct pilha *p){
    if(vazia(p)){
        printf("Está vazia!\n");
        return -1;
    } else{
        int valor = p->itens[p->topo];
        p->topo--;
        return valor;
    }
}

int main() {
 struct pilha p;
  inicializar(&p);

  empilhar(&p, 10);
  empilhar(&p, 20);
  empilhar(&p, 30); 

    //Populando pilha
    for(int i = 31; i < 90; i++){
        empilhar(&p, i);
    }
 
    return 0;
}