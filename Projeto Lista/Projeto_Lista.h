//lista_simples.h
#include <iostream>
using namespace std;
struct lista{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

//Demais cabeçalhos de funçao da biblioteca
Lista* inicializa();
Lista* insere_inicio (Lista* l, int i);
Lista* insereFim(Lista* l);
void imprime (Lista* l);
void mostra_final(Lista* l);
void mostra_inicio(Lista* l);
bool IsEmpty(Lista* l);
int tamanho(Lista* l);
Lista* retira (Lista* l, int v);
Lista* retiraInicio (Lista* l);
Lista* retiraFim (Lista* l);
Lista* busca (Lista* l, int v);
Lista* ocorrencias(Lista* l, int v);

