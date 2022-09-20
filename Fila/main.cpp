#include "fila.h"
void menu(){
	printf("\nMenu");
	printf("\n1-Enqueue");
	printf("\n2-Dequeue");
	printf("\n3-Print");
	printf("\n4-Front");
	printf("\n5-IsEmpty?");					
	printf("\n\nEscolha uma opcao:");	
}
int main(int argc, char** argv) {
	FILA *f;
	int op,x;
	f=inicializa(f);
	menu();
	scanf("%d",&op);
	while(op>0 && op<6){			
		switch(op){
			case 1:
				printf("\nInforme um numero:");
				scanf("%d",&x);
				f=enfileira(f,x);
				break;
		
			case 2:
				printf("\n");
				f=desenfileira(f);
				break;
		
			case 3:
				printf("\n");
				print(f);
				printf("\n");	
				break;
			case 4:
				front(f);
				break;
			case 5:
				if(IsEmpty(f)){
					cout<< "Lista esta vazia!"<<endl;
				}
				else{
					cout<< "Lista nao esta vazia!"<<endl;
				}
				break;										
		default:
			printf("Encerrando...");
			break;
					}
		menu();				
		scanf("%d",&op);
	}

	return 0;
}
