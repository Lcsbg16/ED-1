//pilha.cpp
#include "pilha.h"

void init_stack(pilha* p){
	p->qtd = 0;
	p->vet = NULL;
}

void push(int x, pilha* p){ //inclui x no topo da pilha
	p->qtd++;
	if (p->qtd == 1)
		p->vet = (int*) malloc(sizeof(int));
	else 
		p->vet = (int*) realloc(p->vet, p->qtd);	
	p->vet[p->qtd-1] = x;	
}

int pop(pilha* p){ //retorna x extraído do topo da pilha
	int x = -99;
	if (!isEmpty(p)){
		x = p->vet[p->qtd-1];
		p->qtd--;
		if (p->qtd < 1)
			kill_stack(p);
		else	
			p->vet = (int*) realloc(p->vet, p->qtd);	
	} else {
		cout << "Stack is empty!" << endl;
	}
	return x;
}

int top(pilha* p){ //retorna x do topo da pilha, sem removê-lo
	if (!isEmpty(p))
		return p->vet[p->qtd-1];
	else cout << "Stack is empty!" << endl;
	return -99;
}

bool isEmpty(pilha* p){ //true se é pilha não vazia
	return p->qtd == 0;
}

int size(pilha* p){ //retorna qtd de dados na pilha
	return p->qtd;
}

void print(pilha* p){ //loop no vetor pilha informando cada elemento deste
	if (!isEmpty(p)){
		for (int i=0; i<p->qtd; i++){
			cout << p->vet[i] << " - ";
		}
		cout << "> [top]" << endl;
	} else {
		cout << "Stack is empty!" << endl;
	}
}

void kill_stack(pilha* p){ //desaloca vetor de controle de Pilha
	free(p->vet);
	p->qtd = 0;
}

