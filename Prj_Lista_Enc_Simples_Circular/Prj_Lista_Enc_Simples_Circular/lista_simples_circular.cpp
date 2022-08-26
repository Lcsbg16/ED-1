//Aula ED - prof. Irineu
//lista_simples_circular.cpp
#include "lista_simples_circular.h"


/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa(){ //ok
	return NULL;
}

bool vazia(Lista* l){ //verifica se lista est� vazia: true caso positivo!
	return l == NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	if (!vazia(l)){
		novo->prox =l->prox;
		l->prox = novo;
		return l;
	}else
		novo->prox=novo;
	return novo;	
}
Lista* insere_fim(Lista* l, int i){
	
	if (vazia(l)) //se for 1a inser��o... delega para insere_inicio
		return insere_inicio(l, i);
	
	//sen�o... faz-se o �ltimo virar pen�ltimo...
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
	novo->prox = l->prox;
	l->prox = novo;
	return novo;
}

/* fun��o imprime: imprime valores dos elementos */
void imprime(Lista* l){
	if (!vazia(l)){
		Lista* p=l->prox; /* vari�vel auxiliar aponta para n� inicial */
	 	printf("Info: ");
		do{ //garantir a travessia da lista mesmo no caso de �nico n�, partindo do inicial e usando-o tb para teste final
			printf("%d - ", p->info);	
			p = p->prox;
		}while(p !=l->prox);
		printf("\n"); 
	}else printf("Lista esta vazia!\n");
}

/* fun��o retira: retira elemento da lista */
Lista* retira (Lista* l, int v) {
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
		
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l->prox; /* ponteiro para percorrer a lista*/
 	/* procura elemento na lista, guardando anterior */
	do{ //garantir a travessia da lista mesmo no caso de �nico n�, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
			break;
		ant = p;
		p = p->prox;	
	}while(p != l->prox); 
	
 	/* verifica se achou elemento */
 	if (ant != NULL && p == l->prox) //ok
 		return l; /* n�o achou: retorna lista original */
 	//verifica se h� apenas 1 n�-dado
 	if (p == p->prox){ 
 		free(p);
 		return NULL;
	}
	//achou n�-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox){//ok //primeiro n�-dado em p
		l->prox = p->prox; //�ltimo aponta para segundo
		free(p);
		return l;
	}
	//sen�o, � n� intermedi�rio para final
	ant->prox = p->prox;
	if (p == l){//se p aponta para o �ltimo n�-dado
		l = ant;
	} 
	free(p);
	return l;
}

Lista* busca (Lista* l, int v){
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
	Lista* p = l->prox;
	do{ 
		if (p->info == v){
			printf("Valor encontrado!\n");
			return p;
		}
		p = p->prox;	
	}while(p != l->prox); 
	printf("Valor n�o encontrado!\n");
	return l;	
}
int size (Lista* l)
{
	if(vazia(l)){
		printf("Lista vazia!\n");
		return 0;
	}
	
	int cont=0;
	Lista* p = l->prox;
	do{ 
		cont++;
		p = p->prox;	
	}while(p != l->prox); 
	return cont;	
}

Lista* remove_inicio(Lista *l)
{
	if(!vazia(l)){
		Lista* p=l->prox;
		if(p!=l){
			l->prox=p->prox;
			free(p);
			return l;
		}
	}else
		printf("A Lista ja esta vazia!\n");
}
Lista* retira_fim(Lista* l){
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
	if(l!=l->prox){
		Lista* p=l;
		do{
			p=p->prox;
		}while(p->prox!=l);
		printf("Ultimo no-dado foi retirado!\n");
		p->prox=l->prox;
		free(l);
		return p;
	}else{
		printf("Ultimo e unico no-dado foi retirado!\n");
		free(l);
		return NULL;	
	}
}

Lista* libera (Lista* l){
	if(!vazia(l)){
	Lista* p = l->prox;
	Lista* aux= NULL;	
	do
	{
		aux=p;
		p = p->prox;
		free(aux);
	}while (p != l->prox);
	printf("Lista liberada!\n");	
	return NULL;
	}else
		printf("A lista ja esta vazia!\n");	
	return l;	
}

void imprime_inicio(Lista* l){
	if(!vazia(l)){
		Lista* p=l->prox;
		if(p!=l){
			printf("Primeiro no-dado: %d\n",p->info);
		}else{
			printf("Primeiro e unico no-dado: %d\n",p->info);
		}
	}else
		printf("A Lista ja esta vazia!\n");			
}
/*void imprime_fim(Lista* l){
	if(!vazia(l)){
		if(l!=l->prox){//caso tenha mais de um no-dado na lista
			printf("Ultimo no-dado: %d\n",l->info);
		}
		else//caso so tenha um no-dado na lista
			printf("Ultimo e unico no-dado: %d\n",l->info);
	}else
	printf("A lista esta vazia!\n");
}*/
void imprime_fim(Lista* l){
	if(vazia(l)){
		printf("A lista esta vazia!\n");
	}
	else{
		printf("Ultimo no-dado: %d\n",l->info);
	}
}
