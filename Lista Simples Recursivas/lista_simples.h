//lista_simples.h
#include <iostream>
using namespace std;

struct lista{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

//Demais cabeçalhos de função da Bib.
Lista* inicializa();
Lista* insere_inicio(Lista* l, int i);
void imprime(Lista* l);
bool IsEmpty(Lista* l);
int tamanho(Lista* l);
void libera (Lista* l);
void imprime_rec (Lista* l);
Lista* retira_rec (Lista* l, int v);
void libera_rec (Lista* l);


