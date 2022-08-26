#include "BubbleSort.h"
#include "VetBubbleSort.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("*************************************\n");
	printf("\t\tMenu\n");
	printf("*************************************\n");
	printf("1- Insere Inicio\n");	
	printf("2- Insere Fim\n");	
	printf("3- Ordenacao BubbleSort\n");
	printf("4- Busca Sequencial\n");	
	printf("5- Busca Binaria  \n");
	printf("6- Imprime\n");
	printf(">");
}
int main(int argc, char** argv) {
	int size=0;
	int op;
	int *vetor;
	int x;
	bool achou;
	vetor=inicializa(vetor);
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Informe um valor a ser inserido no inicio do vetor:");
				scanf("%d",&x);
				vetor=insere_inicio(vetor,x,size);
				break;	
			case 2:
				printf("Informe um valor a ser inserido no final do vetor:");
				scanf("%d",&x);
				vetor=insere_fim(vetor,x,size);
				break;
			case 3:
				printf("Ordenando vetor com BubbleSort!\n");
				BubbleSort(vetor,size);
				break;
			case 4:
				printf("Infrome um valor para ser buscado sequencialmente:\n");
				scanf("%d",&x);
				achou=busca_seq(vetor,x,size);
				if(achou==true){
					printf("Achou o elemento!\n");
				}else{
					printf("Nao achou o elemento!\n");
				}
				break;	
											
			case 5:
				printf("Infrome um valor para ser buscado em BUSCA BINARIA:\n");
				scanf("%d",&x);
				achou=busca_bin(vetor,x,size);
				if(achou==true){
					printf("Achou o elemento!\n");
				}else{
					printf("Nao achou o elemento!\n");
				}
				break;
			case 6:
				imprime(vetor,size);	
				break;																				
			default:
				printf("Opçao invalida!");														
		}
	}while(op>0 && op<7); 
	return 0;
}
