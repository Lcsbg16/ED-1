#include "pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout << "Stack options:" <<endl;
	cout << "1- Push" <<endl;
	cout << "2- Pop" <<endl;
	cout << "3- Top" <<endl;
	cout << "4- isEmpty" <<endl;
	cout << "5- Size" <<endl;
	cout << "6- Print" <<endl;
	cout << "7- Free" << endl;
	cout << "Other to quit" << endl;
	cout << "? ";
}

int main(int argc, char** argv) {
	unsigned int op(0);
	pilha p; 
	init_stack(&p);
	int x; 
	
	do{
		menu();
		cin >> op;
		switch (op){
			case 1:
				//push
				cout << "Number to push? ";
				cin >> x;
				cout << endl;
				push(x, &p);
				break;
			case 2:
				//pop
				x = pop(&p);
				if (x != -99)
					cout << "Removed: " << x << endl;
				break;
			case 3:
				//top
				x = top(&p);
				if (x != -99)
					cout << "At top: " << x << endl;
				break;
			case 4:
				//isEmpty
				if (isEmpty(&p))
					cout << "Stack is empty!" << endl;
				else 	
					cout << "Stack is not empty!" << endl;
				break;
			case 5:
				//size
				cout << "Stack size: " << size(&p) << endl;
				break;				
			case 6:
				//print
				print(&p);
				break;
			case 7:
				//kill_stack 
				kill_stack(&p);
				cout << "Free stack executed!" << endl;
				break;	
			default:
				cout << "Option is not valid!" << endl;					
		}
		cout << endl;
	} while(op > 0 && op < 8);	
	
	cout << "End of Stack Program!" << endl;
	kill_stack(&p);
	return 0;
}
