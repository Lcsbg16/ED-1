//Aula ED - prof. Irineu
#include "lista_simples_circular.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*************************************\n");
	printf("\t\tMenu\n");
	printf("*************************************\n");
	printf("1- Insere um valor no inicio\n");
	printf("2- Insere um valor no final \n");
	printf("3- Retira um valor informado\n");
	printf("4- Is Empty?\n");
	printf("5- Print\n");
	printf("6- Busca\n");
	printf("7- Size\n");
	printf("8- Remove um valor no inicio\n");
	printf("9- Remove um valor no final \n");
	printf("10- Libera\n");	
	printf("11- Imprime Inicio\n");
	printf("12- Imprime Fim\n");
	printf(">");
}
int main(int argc, char** argv) {
	Lista* l; /* declara uma lista não inicializada */
	int op,x;
	l =inicializa();
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Informe um valor a ser inserido no inicio:");
				scanf("%d",&x);
				l=insere_inicio(l,x);
				break;
			case 2:
				printf("Informe um valor a ser inserido no final:");
				scanf("%d",&x);
				l=	insere_fim(l,x);
				break;	
			case 3:
				printf("Informe um valor a ser retirado da lista:");
				scanf("%d",&x);
				l=retira(l,x);
				break;
			case 4:
				if(vazia(l)==NULL){
					printf("A lista nao esta vazia!\n");
				}
				else{
					printf("A lista esta vazia!\n");
				}
				break;
			case 5:
				imprime(l);	
				break;
			case 6:
				printf("Informe um valor para ser buscado:");
				scanf("%d",&x);
				busca(l,x);	
				break;
			case 7:
				printf("Size:%d\n",size(l));		
				break;
			case 8:
				l=remove_inicio(l);	
				break;
			case 9:
				l=retira_fim(l);	
				break;							
			case 10:
				printf("Libera a lista\n");
				l=libera(l);
				break;
			case 11:
				imprime_inicio(l);	
				break;
			case 12:
				imprime_fim(l);	
				break;												
			default:
				printf("Opçao invalida!");														
		}
	}while(op>0 && op<13); 
	return 0;
}
