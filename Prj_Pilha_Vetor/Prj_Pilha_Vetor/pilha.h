//pilha.h
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


struct Pilha{
	int* vet;
	int qtd;
};
typedef struct Pilha pilha;

void init_stack(pilha* p);
void push(int x, pilha* p);
int pop(pilha* p);
int top(pilha* p);
bool isEmpty(pilha* p);
int size(pilha* p);
void print(pilha* p);
void kill_stack(pilha* p);


