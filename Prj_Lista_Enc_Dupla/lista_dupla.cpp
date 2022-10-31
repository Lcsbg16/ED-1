//lista_dupla.cpp
#include "lista_dupla.h"
#include <stdlib.h>

/*inicializa a lista*/
Lista2* inicializa(){
	return NULL;
}

Lista2* insere_ord(Lista2* l, int v)
{
	Lista2* novo = (lista2*) malloc (sizeof(lista2));
	Lista2* p=l;
	novo->info = v;
	//Caso seja uma lista vazia
	if (vazia(l)){
		novo->prox = NULL;
		novo->ant = NULL;
		l = novo;
		return l;
	}
	else
	//Insere no inicio
	if(p->info >=novo->info){
		novo->prox = p;
		novo->prox->ant=novo;
		return novo;
	}
	else{
		//Busca a posiçao para inserir
		while(p->prox != NULL && p->prox->info < novo->info){
			p = p->prox;
		}
		novo->prox = p->prox;
		
		
		//Insere no meio
		if(p->prox != NULL){
			novo->prox->ant = novo;
			p->prox = novo;
			novo->ant = p;
		}
		
		//Insere no fim
		if(p->prox==NULL){
			novo->ant=p;
			p->prox=novo;
		}
		return l;
	}

}

void imprimir_frente_fim (Lista2* l){
	if (!vazia(l)){
		cout << "Info: ";
		for(Lista2* p=l; p!=NULL; p=p->prox){
			cout << p->info << " - ";
		}
		cout << endl;
	} else cout << "Lista eh vazia!" << endl;
	
}

bool vazia(Lista2* l){
	return l==NULL;
}

/* função busca: busca um elemento na lista */
Lista2* busca (Lista2* l, int v){
	if (!vazia(l)){
	 	for (Lista2* p=l; p!=NULL; p=p->prox)
	 		if (p->info == v)
	 			return p;
	}
 	return NULL; /* não achou o elemento ou a lista é vazia */
}

void busca_msg (Lista2* l, int v){
	if (busca(l, v) != NULL) //achou!
		cout << "Elemento " << v << " encontrado!\n";
	else 
		cout << "Elemento " << v << " nao encontrado!\n";
}

/* função retira: retira elemento v da lista */
Lista2* retira (Lista2* l, int v) {
 	Lista2* p = l;
 	for(p=l;p!= NULL; p=p->prox){
 		if(p->info==v)
 			break;
	 }
 	//1- Testa se achou?
	if (p == NULL){
 		cout << "Elemento " << v << " nao encontrado!\n";
 		return l; /* não achou o elemento: retorna lista inalterada */
 }
	//2- Testa casos de encontrar!
	 /* retira elemento do encadeamento */
 	if (l == p) //É o 1o nó-dado
 		l = p->prox;
 	else //É nó-dado intermediário a último
 		p->ant->prox = p->prox;
 	//Há nó-dado seguinte a p? Se sim, atualize o ant dele!	
 	if (p->prox != NULL)
 		p->prox->ant = p->ant;
 	
	free(p);
 	
 	return l;
}
Lista2* retira_inicio(Lista2* l){
	if(!vazia(l)){
		Lista2* p=l;
		l=l->prox;
		/* if(l!=NULL)
			l->ant=NULL;*/
		printf("Removido primeiro valor: %d\n",p->info);	
		free(p);
	}
	else
		printf("Lista ja esta vazia!\n");
	return l;
}
Lista2* retira_fim(Lista2* l){
	if(!vazia(l)){
		Lista2* p=l;	
		for(p=l;p->prox!=NULL;p=p->prox);
		if(p->ant!=NULL){
			p->ant->prox=NULL;
			printf("Removido valor no final: %d\n",p->info);
		}
		else{
			l=NULL;
			printf("Removido unico valor: %d\n",p->info);
		}
		free(p);					
}
	else
		printf("Lista ja esta vazia!\n");
	return l;	
}

void imprimir_inverso (Lista2* l){
	if (!vazia(l)){
		cout << "Info: ";
		Lista2* p;
		Lista2* a;
		for(p=l; p!=NULL; p=p->prox){
			a=p;
		}
		for(Lista2* aux=a;aux!=NULL;aux=aux->ant){
			cout << aux	->info << " - ";
	}
		cout << endl;
	} else cout << "Lista eh vazia!" << endl;
	
}
