#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

int main(int argc, char** argv) {
	
	int opcion = 0; 
	while (opcion != 4){
		cout << "-----------MENU-----------" <<endl; 
		cout << " 1) Eejercicio 1." <<endl; 
		cout << " 2) Ejercicio 2. " <<endl; 
		cout << " 3) Ejercicio 3. " <<endl; 
		cout << " 4) Salir. " <<endl; 
		cout << "--------------------------" <<endl; 
		cout << "Ingrese la opcion: " <<endl; 
		cin >> opcion; 
		switch (opcion){
			case 1:
				{
				cout << "--------DIBUJAR TABLERO--------" <<endl; 
				cout << "Ingrese la cantidad n para filas y columnas: " <<endl; 
				int n = 0; 
				cin >> n; 
				int color = 0; 
				for (int c = 0; c < n; c++){
					for (int j = 0; j < n; j++){
						if (color == 0){
							cout << color;
							color = 1;  
						}else {
							cout << color;  
							color = 0;
						}
					}
					cout <<endl; 
					if (color == 0){
						color = 1;  
					}else {  
						color = 0;
					}
				}
				cout << "-------FIN DIBUJAR TABLERO-------" <<endl;
				break; 
				}
			case 2: 
				{
				cout << "--------SUMATORIA--------" <<endl; 
				cout << "Ingrese el limite de la sumatoria: " <<endl; 
				int limite = 0; 
				cin >> limite; 
				int sumatoria = 0; 
				for (int c = 1; c <= limite; c++){
					int parentesis = c - 1; 
					int afuera = 2 * c; 
					int operacion = parentesis * afuera; 
					sumatoria += operacion; 
				}
				break; 
				}
			case 3: 
				{
					
				break; 
				}
		}//Fin del switch 
	}//Fin del while
	
	
	
	return 0;
}