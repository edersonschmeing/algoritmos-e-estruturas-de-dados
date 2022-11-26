#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int dado;
    struct Node *proximo;
} Node; 


typedef struct _Fila {
    Node *inicio;
    Node *fim;    
} Fila;

