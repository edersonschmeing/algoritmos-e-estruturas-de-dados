#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int dado;
    struct Node *proximo;
} Node; 

typedef struct _Fila {
    Node *inicio;
    Node *fim;
    int tamanho;    
} Fila;

Fila* cria_fila(){
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    if(fila != NULL){
        fila->fim = NULL;
        fila->inicio = NULL;
        fila->tamanho = 0;
    }
    return fila;
}

void libera_fila(Fila* fila){
    if(fila != NULL){
        Node* no;
        while(fila->inicio != NULL){
            no = fila->inicio;
            fila->inicio = fila->inicio->proximo;
            free(no);
        }
        free(fila);
    }
}

int insere_fila(Fila* fila, int dado){
    if(fila == NULL)
        return 0;
    Node *no = (Node*) malloc(sizeof(Node));
    if(no == NULL)
        return 0;
    no->dado = dado;
    no->proximo = NULL;
    if(fila->fim == NULL) 
        fila->inicio = no;
    else
        fila->fim->proximo = no;
    fila->fim = no;
    fila->tamanho++;
    return 1;
}

int remove_fila(Fila* fila){
    if(fila == NULL)
        return 0;
    if(fila->inicio == NULL)
        return 0;
    Node *no = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    if(fila->inicio == NULL)  
        fila->fim = NULL;
    free(no);
    fila->tamanho--;
    return 1;
}

int tamanho_fila(Fila* fila){
    if(fila == NULL)
        return 0;
    return fila->tamanho;
}

int vazia_fila(Fila* fila){
    if(fila == NULL)
        return 1;
    if(fila->inicio == NULL)
        return 1;
    return 0;
}


void imprime_fila(Fila* fila){
    if(fila == NULL)
        return;
    Node* no = fila->inicio;
    while(no != NULL){
        printf("dado: %d\n",no->dado);
        printf("-------------------------------\n");
        no = no->proximo;
    }
}


int main(){
   
    Fila* fila = cria_fila();
    printf("Tamanho: %d\n\n\n\n", tamanho_fila(fila));

    insere_fila(fila, 50);
    insere_fila(fila, 40);
    insere_fila(fila, 60);
    insere_fila(fila, 30);
    insere_fila(fila, 10);
        
    imprime_fila(fila);
   
    printf("Tamanho: %d\n\n",tamanho_fila(fila));

    remove_fila(fila);
        
    printf("Tamanho: %d\n\n",tamanho_fila(fila));
    imprime_fila(fila);


    libera_Fila(fila);
    return 0;
}


