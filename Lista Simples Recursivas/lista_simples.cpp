//lista_simples.cpp
#include "lista_simples.h"
#include "stdlib.h"

Lista* inicializa(){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i)
{
	//lIS->prox estara apontando para 1o no-dado
	//criando novo no-dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	//testar se e o primeiro encadeamento
	if (IsEmpty(l))
	{
		novo->prox = novo;
		return novo;
	}
	else
	{
		novo->prox = l->prox; //faz novo se o 1, e o antigo 1 ser segundo. Passa a informacao pelo nó
		l->prox = novo; //atualiza o encadeamento do nó-final com o novo 1o nó-dado
	}
	return l;	
}

/* imprime a lista*/
void imprime(Lista* l)
{
	if (!IsEmpty(l))
	{
		Lista*p = l->prox; /* variavel auxiliar aponta para nó inicial */
	 	printf("INFO ELEMENTO: ");
	 	
		do
		{ 
			//garantir a travessia da lista mesmo no caso de unico no, partindo do inicial e usando-o tb para teste final
			printf("%d - ", p->info);	
			p = p->prox;
		}
		
		while(p!=l->prox); 
		printf("\n"); 
	}
	else 
		printf("LISTA VAZIA!\n");
}
/*Verifica se lista é vazia*/
bool IsEmpty(Lista* l){
	return l == NULL;
}

/*Retorna o tamanho da lista*/
int tamanho(Lista* l){
	int cont(0);
	for(Lista* p = l; p != NULL; p = p->prox){
		cont++;
	}
	return cont;
}

 void libera (Lista* l)
{
	Lista* p = l;
	
	while(p != NULL)
	{
		Lista* tmd = p->prox;
		
		while(p !=NULL)
		{
			Lista* tmd = p->prox; //guarda referencia para o proximo elemento
			free(p);
			p = tmd;
		}
	
	}	

}


void imprime_rec (Lista* l)
{
	 if (IsEmpty(l))
	 	return;
	 printf("info: %d\n",l->info);
	 imprime_rec(l->prox);
}


Lista* retira_rec (Lista* l, int v)
{
	if (IsEmpty(l))
		return l;
	if (l->info == v) {
		Lista* t = l;
		l = l->prox;
		free(t);
	}
	else {
		l->prox = retira_rec(l->prox,v);
	}
	return l;
}

void libera_rec (Lista* l)
{
 	if (!IsEmpty(l))
 {
		libera_rec(l->prox);
 		free(l);
 }
}
