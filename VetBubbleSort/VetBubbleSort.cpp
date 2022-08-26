#include "VetBubbleSort.h"
#include "BubbleSort.h"
int* inicializa(int *vetor)
{
	vetor = NULL;
	return vetor;
}

int* insere_inicio(int* vetor, int v,int &size)
{
	if(vetor==NULL){
		vetor = (int *)malloc (1*sizeof(int));
		size=1;
		vetor[0]=v;
		return vetor;
	}
	else{	
		int nsize;
		int *nvetor;
		int i=0;
		size++;
		nvetor = (int *) malloc(size*sizeof(int));
		nvetor[0] = v;
		for(nsize = 1; nsize < size; nsize++)
		{
			nvetor[nsize] = vetor[i];
			i++;
		}
	return nvetor;
	}
}


int* insere_fim(int* vetor, int v,int &size)
{
	if(vetor==NULL){
		vetor = (int *)malloc (1*sizeof(int));
		size=1;
		vetor[0]=v;
		return vetor;
	}
	else{	
		size++;
		vetor = (int *)realloc(vetor, size*sizeof(int));
		vetor[size-1]=v;
		return vetor;
	}
}
void imprime(int* vetor,int size){
	if(size==0){
		printf("Vetor Vazio!\n");
	}else{
	printf("Info:");
	for(int i=0;i<size;i++){
		printf("%d - ",vetor[i]);
	}
	printf("\n");
}
}

bool busca_seq(int* vetor,int v,int size)
{
	if(vetor==NULL){
		printf("Vetor VAZIO!\n");
		return vetor;
	}else{
		for(int i=0;i<size;i++){
			if(vetor[i]==v){
				return true;
		}
	}
	return false;
}
}

bool busca_bin(int* vetor,int v,int size){
	if(size==0){
		printf("Vetor Vazio!\n");
		return false;	
	}
	int *vetor_copia;
	vetor_copia = (int *) malloc(size*sizeof(int));
	vetor_copia = vetor;
	BubbleSort(vetor_copia,size);
	int inicio=0,fim=size-1;
	int meio=(inicio+fim)/2;
		
	if(vetor_copia[meio]==v){
		return true;
	}
	else{
		while (inicio <= fim){
        	meio = (inicio + fim)/2;
        	if(vetor_copia[meio]==v)
            	return true;
        	if(v < vetor_copia[meio])
           	 fim = meio-1;
       		else
            	inicio= meio+1;
    }		
	}
    return false; 
}
