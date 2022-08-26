//Aula ED - prof. Irineu
//lista_simples_circular.h
#include <iostream>
#include <stdlib.h>
#include <stdio.h>



struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa();

bool vazia(Lista* l);

Lista* insere_inicio(Lista* l, int i);

Lista* insere_fim(Lista* l, int i);

void imprime(Lista* l);

Lista* retira(Lista* l, int v);

Lista* busca (Lista* l, int v);

int size (Lista* l);

Lista* remove_inicio(Lista *l);

Lista* retira_fim(Lista *l);

Lista* libera(Lista* l);

void imprime_inicio(Lista* l);	

void imprime_fim(Lista* l);	
