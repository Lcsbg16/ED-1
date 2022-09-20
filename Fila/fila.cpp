//fila.cpp
#include "fila.h"
FILA* inicializa(FILA* f){
  return NULL;
}

FILA* enfileira (FILA* f, int v){
	FILA* novo=(FILA*) malloc(sizeof(FILA));
	novo->info = v;
	if(f==NULL){
		novo->prox=NULL;
		f=novo;
	    return novo;
	}
	else{
		FILA* p;
		for(p=f;p->prox!=NULL;p=p->prox);
		p->prox=novo;
		novo->prox=NULL;
		return f;
	}
}
FILA* desenfileira(FILA *f){
	if (f==NULL){
	  	printf("a fila ja esta vazia\n");
		return NULL;
	}
	if (f->prox==NULL){
	   free(f);
	   return NULL;
	}
	else{
	   FILA* p=f;
	   f=f->prox;
	   free(p);
	   return f;
	}
}

void print(FILA* f){
	if (f==NULL){
	  printf("a fila ja esta vazia");
	}
	else{
		FILA* p;
		printf("info:");
		for(p=f; p!=NULL; p=p->prox){
	     	printf(" %d -", p->info);
		}
	}
}
void front (FILA* f){
	if (f==NULL){
	  printf("a fila ja esta vazia");
	}
	else{
	   printf("front: %d", f->info);
	}
}
bool IsEmpty(FILA* f){
	return f==NULL;
}



