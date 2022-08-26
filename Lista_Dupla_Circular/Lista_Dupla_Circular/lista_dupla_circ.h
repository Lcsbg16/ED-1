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
void imprimir(Lista2* l);
void imprimir_inverso (Lista2* l);
Lista2* insere_fim (Lista2* l, int v);
Lista2* remove_inicio(Lista2* l);
Lista2* remove_fim(Lista2* l);
Lista2* remove_valor(Lista2* l, int v);

