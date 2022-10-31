//lista_dupla.h
#include <iostream>
using namespace std;

struct lista2 {
	int info;
	struct lista2* ant;
	struct lista2* prox;
};
typedef struct lista2 Lista2;

Lista2* inicializa();
Lista2* insere_inicio (Lista2* l, int v);
Lista2* insere_ord (Lista2* l, int v);
void imprimir_frente_fim (Lista2* l);
void imprimir_inverso (Lista2* l);
bool vazia(Lista2* l);
Lista2* busca (Lista2* l, int v);
void busca_msg (Lista2* l, int v);
Lista2* retira (Lista2* l, int v);
Lista2* retira_inicio(Lista2* l);
Lista2* retira_fim(Lista2* l);

