//lista_simples.cpp
#include "Projeto_Lista.h"
#include <stdlib.h>
Lista* inicializa(){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));//Aloca nó-dado
	novo->info = i;//Atribui i a nó-dado -> info
	novo->prox = l;//Atribui ponteiro-cabeça a nó-dado->prox;
	return novo;//retorna endereço do nó-dado recem-alocado
}
Lista* insereFim(Lista* l,int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	if(IsEmpty(l)){
		novo->prox=NULL;
		return novo;
	}
	
	else{
		Lista* p;
		for(p=l;p->prox!=NULL;p=p->prox);
		p->prox=novo;
		novo->prox=NULL;
		return l;
	}

}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
	Lista* p; /* variável auxiliar para percorrer a lista */
	if(IsEmpty(l)){
		cout<< "Lista Vazia!"<<endl;
	}
	else{
		cout <<"L: ";
	 for (p = l; p != NULL; p = p->prox){
		 cout << p->info << " - ";
		}
	}
	cout<<endl;
}
void mostra_inicio(Lista* l){
	Lista* p;
	if(IsEmpty(l)){
		cout<< "Lista Vazia!"<<endl;
	}
	else{
		p=l;
		cout<<"Primeiro Elemento: "<<p->info<<".";		
	}
	cout<<endl;	
}
void mostra_final(Lista* l){
	Lista* p;
	Lista* ant=NULL;
	if(IsEmpty(l)){
		cout<< "Lista Vazia!"<<endl;
	}
	else{
		for(p=l;p!=NULL;p=p->prox){
			ant=p;	
		}
		if(p==NULL){
			cout<<"Ultimo Elemento: "<<ant->info<<".";
		}		
	}
	cout<<endl;	
}
/*Verifica se a lista esta vazia*/
bool IsEmpty(Lista* l){
	return l==NULL;
}

int tamanho(Lista* l){
	Lista* p; /* variável auxiliar para percorrer a lista */
		int cont(0);
		 for (p = l; p != NULL; p = p->prox){
			 cont++;
}
	return cont;	
}

/* função retira: retira elemento da lista */

Lista* retira (Lista* l, int v) {
	 Lista* ant = NULL;
	 Lista* p = l; 
	 while (p != NULL && p->info != v) { 
		 ant = p;
		 p = p->prox;
	 }
	 if (p == NULL)
	 	return l;
	 if (ant == NULL) {
	 	l = p->prox;
	 }
	 else {
		 ant->prox = p->prox;
	 }
	 cout<<"Elemento Removido: "<<p->info<<"."<<endl;
	 free(p);
	 return l;
}

Lista* retiraInicio(Lista* l){
	if(IsEmpty(l)){
		cout<< "Lista Vazia!"<<endl;
		return NULL;
	}
	Lista* p=l;
	if(p->prox==NULL){
		printf("Retirando Primeiro e Unico elemento: %d",p->info,".\n\n");
		free(p);
		return NULL;
	}
	else{
		l=l->prox;
		printf("Retirando Primeiro Elemento: %d",p->info,".\n\n");
		free(p);
		return l;
	}
}

Lista* retiraFim(Lista* l){
	if(IsEmpty(l)){
		cout<< "Lista Vazia!"<<endl;
		return NULL;
	}	
	
	Lista* p=l;
	Lista* ant=NULL;
	
	if(p->prox==NULL){
		printf("Retirando Ultimo e Unico elemento: %d",p->info,".\n");
		free(l);
		return NULL;
	}
	else{
		while(p->prox!=NULL){
			ant=p;
			p=p->prox;
		}
		printf("Retirando Ultimo Elemento: %d",p->info,".\n");
		free(p);
		ant->prox=NULL;
		return l;		
	}
	
	
		
}


Lista* busca (Lista* l, int v)
{
	 Lista* p;
	 for (p=l; p!=NULL; p=p->prox){
	 	if (p->info == v){
		 	cout<<"Achou o elemento!"<<endl;	
			return p;
		 }
		 else{
		 	cout<<"Nao achou o elemento!"<<endl;
		 }
	 }
	 	return NULL; /* não achou o elemento */
}

Lista* ocorrencias(Lista* l, int v)
{
	 Lista* p;
	 int cont=0;
	 for (p=l; p!=NULL; p=p->prox){
	 	if (p->info == v){
	 		cont++;	
	 }
}
	cout<<"Numero de Ocorrencias: "<<cont<<endl;
	return l;
}

