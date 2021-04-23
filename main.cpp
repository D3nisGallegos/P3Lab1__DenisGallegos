#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

int main(int argc, char** argv) {
	
	int opcion = 0; 
	while (opcion != 4){
		cout << "-----------MENU-----------" <<endl; 
		cout << " 1) Ejercicio 1." <<endl; 
		cout << " 2) Ejercicio 2. " <<endl; 
		cout << " 3) Ejercicio 3. " <<endl; 
		cout << " 4) Salir. " <<endl; 
		cout << "--------------------------" <<endl; 
		cout << "Ingrese la opcion: " <<endl; 
		cin >> opcion; 
		switch (opcion){
			case 1:
				{
				int n = 0;
				bool v = false;
				while (v == false){
					cout << "--------DIBUJAR TABLERO--------" <<endl; 
					cout << "Ingrese la cantidad n para filas y columnas: " <<endl;  
					cin >> n; 
					if (n <= 0){
						v = false; 
						cout << "Numero ingresado no valido. " <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while de entrada. 
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
				cout <<endl;
				break; 
				}
			case 2: 
				{
				int limite = 0;
				bool v = false;
				while (v == false){
					cout << "--------SUMATORIA--------" <<endl; 
					cout << "Ingrese el limite de la sumatoria: " <<endl; 
					cin >> limite; 
					if (limite <= 0){
						v = false; 
						cout << "Numero ingresado no valido. " <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while de entrada. 
				double sumatoria = 0; 
				for (int c = 1; c <= limite; c++){
					int parentesis = c - 1; 
					int afuera = 2 * c; 
					int operacion = parentesis * afuera; 
					sumatoria += operacion; 
				}
				cout << "El resultado de la sumatoria es: " << sumatoria <<endl; 
				cout << "-------FIN SUMATORIA-------" <<endl;
				cout << endl; 
				break; 
				}
			case 3: 
				{
				int limite = 0;
				bool v = false;
				while (v == false){
					cout << "----------------" <<endl; 
					cout << "Ingrese el limite de la sumatoria: " <<endl; 
					cin >> limite; 
					if (limite <= 0){
						v = false; 
						cout << "Numero ingresado no valido. " <<endl; 
					}else {
						v = true; 
					}
				}//Fin del while de entrada. 
				break; 
				}
		}//Fin del switch 
	}//Fin del while
	
	
	
	return 0;
}