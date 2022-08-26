//VetBubbleSort.h
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int* inicializa(int *vetor);
int* insere_inicio(int* vetor, int v,int &size);
int* insere_fim(int* vetor, int v,int &size);
void imprime(int* vetor,int size);
bool busca_seq(int* vetor,int v,int size);
bool busca_bin(int* vetor,int v,int size);
