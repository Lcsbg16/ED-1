#include "lista_simples.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	cout << "1- Insere_inicio" << endl;
	cout << "2- Imprimir" << endl;
	cout << "3- Verifica Lista se eh vazia" << endl;
	cout << "4- Tamanho da Lista" << endl;
	cout << "5- Libera Lista" << endl;	
	cout << "6- Imprimir Recursivamente"<<endl;
	cout << "7- Retira Recursivamente"<<endl;
	cout << "8- Libera Recursivamente"<<endl;
	cout << "? ";	
}

int main(int argc, char** argv) {
	Lista* l; /* declara uma lista não iniciada */
 	l = inicializa(); /* inicia lista vazia */
 	int op(0);
	do{
		menu();
		cin >> op;
		switch(op){
			case 1:
				int x;
				cout << "Informe x para InsereInicio: ";
				cin >> x;
				l = insere_inicio(l, x);
				break;
			case 2:
				imprime(l);
				break;
			case 3:
				if (IsEmpty(l))
					cout << "Lista eh vazia!\n";
				else 
					cout << "Lista eh nao vazia!\n";
				break;			
			case 4:
				cout << "Tamanho da Lista eh " << tamanho(l) << endl;
				break;	
			case 5:
				libera (l);	
				break;
			case 6:
				imprime_rec(l);
				break;	
			case 7:
				int n;
				cout << "Informe um elemento para ser retirado: ";
				cin>>n;	
				retira_rec(l,n);
				break;
			case 8:
				libera_rec(l);	
				break;											
			default:
				cout << "Opcao invalida! \n";	
		}  
		
	}while(op > 0 && op < 9);
	
	cout << "Fim de programa!\n"; 
	 
	return 0;
}
