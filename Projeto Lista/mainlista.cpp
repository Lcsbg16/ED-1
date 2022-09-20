#include "Projeto_Lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("\n");
	cout<<"*********Menu*********"<< endl;
	cout<<"1- Inserir valor no inicio" << endl;
	cout<<"2- Inserir valor no final" << endl;
	cout<<"3- Imprimir" << endl;
	cout<<"4- Mostrar Inicio" << endl; 
	cout<<"5- Mostrar Final" << endl;	
	cout<<"6- Verifica Lista se eh vazia" << endl;	
	cout<<"7- Verifica Tamanho da Lista" << endl;	
	cout<<"8- Retira um elemento da Lista"<<endl;
	cout<<"9- Retira um elemento no inicio da Lista"<<endl;	
	cout<<"10- Retira um elemento no fim da Lista"<<endl;		
	cout<<"11- Busca um valor da Lista"<<endl;		
	cout<<"12- Numero de ocorrencias de um valor na lista"<<endl;
	cout<<"=========================="<<endl;	
	cout<<"Escolha uma opcao > ";	
}
int main(int argc, char** argv) {
	Lista* l;
	int op(0),x,n;
	l =inicializa(); 
	do{
		menu();
		cin >> op;
		switch(op){
			case 1:
				cout<< "Informe um valor para ser inserido no inicio:";
				cin>>x;
				l=insere_inicio(l,x);
				break;
			case 2:
				cout<< "Informe um valor para ser inserido no final:";
				cin>>x;				
				l=insereFim(l,x);
				break;				
			case 3:
				cout<<"=========================="<<endl;
				imprime(l);
				cout<<"=========================="<<endl;
				break;
			case 4:
				cout<<"=========================="<<endl;
				mostra_inicio(l);
				cout<<"=========================="<<endl;
				break;
			case 5:
				cout<<"=========================="<<endl;
				mostra_final(l);
				cout<<"=========================="<<endl;
				break;								
			case 6:
				if(IsEmpty(l)){
					cout<<"=========================="<<endl;
					cout<< "Lista esta vazia!"<<endl;
					cout<<"=========================="<<endl;
				}
				else{
					cout<<"=========================="<<endl;
					cout<< "Lista nao esta vazia!"<<endl;
					cout<<"=========================="<<endl;
				}
				break;
			case 7:
				cout<<"=========================="<<endl;
				cout<< "Tamanho da lista eh " << tamanho(l)<<endl;
				cout<<"=========================="<<endl;
				break;
			case 8:	
				cout<< "Informe um valor:" <<endl;
				cin>>n;		
				l=retira(l,n);	
				break;
			case 9:		
				l=retiraInicio(l);	
				break;
			case 10:		
				l=retiraFim(l);	
				break;					
			case 11:	
				cout<< "Informe um valor:" <<endl;
				cin>>n;		
				l=busca(l,n);	
				break;
			case 12:	
				cout<< "Informe um valor:" <<endl;
				cin>>n;		
				l=ocorrencias(l,n);	
				break;								
			default:
			cout <<"Opcao invalida\n"<<endl;	
		}
	}while(op>0 && op<13);
	cout <<"Fim do Programa..."<<endl;
 	return 0;
}
