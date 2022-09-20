#include "lista_dupla_circ.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*************************************\n");
	printf("\t\tMenu\n");
	printf("*************************************\n");
	printf("1- Insere um valor no inicio\n");
	printf("2- Insere um valor no final \n");	
	printf("3- Retira um valor no inicio da lista \n");
	printf("4- Retira um valor no final  da lista \n");
	printf("5- Retire um valor desejado: \n");			
	printf("6- Imprime \n");	
	printf("7- Imprime Reverso\n");			
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
				printf("Informe um valor a ser inserido no inicio:");
				scanf("%d",&x);
				l=insere_inicio(l,x);
				break;
			case 2:
				printf("Informe um valor a ser inserido no final:");
				scanf("%d",&x);
				l=insere_fim(l,x);
				break;
			case 3:
				l=remove_inicio(l);
				break;					
			case 4:
				l=remove_fim(l);
				break;
			case 5:
				printf("Informe um valor a ser retirado da Lista:");
				scanf("%d",&x);				
				l=remove_valor(l,x);
				break;								
			case 6:
				imprimir(l);	
				break;
			case 7:
				imprimir_inverso(l);	
				break;																
			default:
				printf("Opçao invalida!");														
		}
	}while(op>0 && op<8); 
	return 0;
}
