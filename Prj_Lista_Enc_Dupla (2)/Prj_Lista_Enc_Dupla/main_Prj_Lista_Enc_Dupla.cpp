#include "lista_dupla.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*************************************\n");
	printf("\t\tMenu\n");
	printf("*************************************\n");
	printf("1- Insere Ordenado\n");	
	printf("2- Retira um valor informado\n");	
	printf("3- Remove um valor no inicio\n");
	printf("4- Remove um valor no final\n");	
	printf("5- Imprime frente->fim  \n");
	printf("6- Imprime fim->frente\n");
	printf("7- Is Empty?\n");
	printf("8- Busca\n");	
	printf(">");
}
int main(int argc, char** argv) {
	Lista2* l; /* declara uma lista não inicializada */
	int op,x;
	l =inicializa();
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Informe um valor a ser inserido ordenado:");
				scanf("%d",&x);
				l=insere_ord(l,x);
				break;
	
			case 2:
				printf("Informe um valor a ser retirado da lista:");
				scanf("%d",&x);
				l=retira(l,x);
				break;
			case 3:
				printf("Removendo valor no inicio da lista!\n");
				l=retira_inicio(l);
				break;
			case 4:
				printf("Removendo valor no fim da lista!\n");
				l=retira_fim(l);
				break;								
			case 5:
				imprimir_frente_fim(l);	
				break;
			case 6:
				imprimir_inverso(l);	
				break;								
			case 7:
				if(vazia(l)==NULL){
					printf("A lista nao esta vazia!\n");
				}
				else{
					printf("A lista esta vazia!\n");
				}
				break;
			case 8:
				printf("Informe um valor para ser buscado:");
				scanf("%d",&x);
				busca_msg(l,x);	
				break;												
			default:
				printf("Opçao invalida!");														
		}
	}while(op>0 && op<9); 
	return 0;
}
