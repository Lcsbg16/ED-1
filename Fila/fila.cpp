//fila.cpp
#include "fila.h"
void inicializaFila(FILA *f){
	f->ini=NULL;
	f->fim=NULL;
}

void enfileira(int dado, FILA *f){
	NO *ptr = (NO*) malloc(sizeof(NO));
	if(ptr==NULL){
		printf("Erro alocacao\n");
		return;
	}
	else{
		ptr->dado= dado;
		ptr->prox=NULL;
		if(f->ini==NULL){
			f->ini= ptr;
		}else{
			f->fim->prox=ptr;
		}
		
		f->fim=ptr;
		return;
	}
	
}

int desenfileira(FILA *f){
	NO *ptr= f->ini;
	int dado;
	if(ptr != NULL){
		f->ini=ptr->prox;
		ptr->prox=NULL;
		dado = ptr->dado;
		free(ptr);
		if(f->ini==NULL){
			f->fim=NULL;
		}
		return dado;
	}
	else{
		printf("Fila Vazia!\n");
	}
}

void print(FILA *f){
	NO *ptr= f->ini;
	if(ptr != NULL){
		while(ptr != NULL){
			printf("%d |",ptr->dado);
			ptr=ptr->prox;
		}
	}
	else{
		printf("Fila Vazia!\n");
		return;		
	}
}
void front(FILA *f) {
	if(f->ini==NULL) {
		printf("\tERRO: Fila vazia");
		return;
	}
	printf("\nO primeiro elemento da fila = %d", f->ini->dado);
}
bool IsEmpty(FILA* f){
	return f->ini==NULL;
}



