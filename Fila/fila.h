//fila.h
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct FILA {
	int info;
	struct FILA* prox;
};
typedef struct FILA FILA;
FILA* inicializa(FILA *f);
FILA* enfileira(FILA *f,int v);
FILA* desenfileira(FILA *f);
void print(FILA *f);
void front(FILA *f);
bool IsEmpty(FILA* f);

