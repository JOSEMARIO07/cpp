#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {	
	//Datos de Entrada
	int a = 0;
	int b = 0;
	int resultado=0;
	
	cout << "ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "ingrese el valor de b: ";
	cin >> b;
	
	//Proceso
	resultado= a + b;
	
	//Datos de Salida
	cout << endl;
	cout << "la suma de a + b es: " << resultado;
	
	return 0;
}
