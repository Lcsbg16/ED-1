//fila.h
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct NO{
	int dado;
	struct NO *prox;
}NO;
typedef struct FILA{
	NO *ini;
	NO *fim;
}FILA;
void inicializaFila(FILA *f);
void enfileira(int dado, FILA *f);
int desenfileira(FILA *f);
void print(FILA *f);
void front(FILA *f);
bool IsEmpty(FILA* f);

